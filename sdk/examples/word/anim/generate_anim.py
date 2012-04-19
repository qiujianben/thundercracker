#!/usr/bin/env python
import math, random
from itertools import *
import os, sys
import fileinput
import sys
import operator
import csv
import unicodedata
import codecs
import copy

    
def generate_anim():
    position_data = []
    f = open('positions.csv', 'rt')
    previous_anim_type = ''
    try:
        reader = csv.DictReader(f)
        for row in reader:
            if not 'AnimType' in row or row['AnimType'] == '':
                row['AnimType'] = previous_anim_type
            else:
                previous_anim_type = row['AnimType']
            #print row
            position_data.append(row)
    finally:
        f.close()     
        #print position_data

    anim_obj_data = []
    f = open('animObjData.csv', 'rt')
    previous_anim_type = ''
    try:
        reader = csv.DictReader(f)
        i = 0
        for row in reader:
            if not 'AnimType' in row or row['AnimType'] == '':
                row['AnimType'] = previous_anim_type
                i += 1
            else:
                previous_anim_type = row['AnimType']
                i = 0
            row['Obj Index'] = str(i)
            #print row
            if row['Asset'] != '0' and not '&' in row['Asset']:
                row['Asset'] = '&' + row['Asset']
            if row['BlankLetterAsset'] != '0' and not '&' in row['BlankLetterAsset']:
                row['BlankLetterAsset'] = '&' + row['BlankLetterAsset']
            if row['MetaLetterAsset'] != '0' and not '&' in row['MetaLetterAsset']:
                row['MetaLetterAsset'] = '&' + row['MetaLetterAsset']
            if row['SpriteAsset'] != '0' and not '&' in row['SpriteAsset']:
                row['SpriteAsset'] = '&' + row['SpriteAsset']
            anim_obj_data.append(row)            
    finally:
        f.close()             
        #print anim_obj_data
        
    anim_data = [[],[],[]]
    f = open('animData.csv', 'rt')
    previous_anim_type = ''
    try:
        reader = csv.DictReader(f)
        for row in reader:
            if not 'AnimType' in row or row['AnimType'] == '':
                row['AnimType'] = previous_anim_type
            else:
                previous_anim_type = row['AnimType']
            if '.' in row['Duration']:
                row['Duration'] = row['Duration'] + 'f'
            else:
                row['Duration'] = row['Duration'] + '.f'
            #print row
            for anim_data_per_max_letters in anim_data:
                anim_data_per_max_letters.append(copy.deepcopy(row))
    finally:
        f.close()  
        #print anim_data
    
    # for each number of letters max per cube
    for i in range(0, 3):
        # for each anim datum, figure out how many anim objects and where they start in the array
        for anim in anim_data[i]:
            anim['NumObjs'] = 0
            j = 0
            for anim_obj in anim_obj_data:
                if anim_obj['AnimType'] == anim['AnimType'] and (anim['Letters Per Cube'] == 'x' or anim['Letters Per Cube'] == str(i+1)) and (anim_obj['Letters Per Cube'] == 'x' or anim_obj['Letters Per Cube'] == str(i+1)):
                    anim['NumObjs'] = (anim['NumObjs'] + 1)
                    #print anim
                    if not ('Obj Index' in anim):
                        anim['Obj Index'] = j
                        #print 'FOO'
                        #print anim
                j += 1
            if not ('Obj Index' in anim):
                anim['Obj Index'] = 0
                #print 'BAR'
            #anim_data[i] = anim

    previous_anim_type = ''
    for anim_obj in anim_obj_data:
        anim_obj['NumPos'] = 0
        i = 0
        for p in position_data:
            if anim_obj['AnimType'] == p['AnimType'] and anim_obj['Letters Per Cube'] == p['Letters Per Cube'] and anim_obj['Obj Index'] == p['Obj Index']:
                anim_obj['NumPos'] = (anim_obj['NumPos'] + 1)
            #print anim
                if not ('Pos Index' in anim_obj):
                    anim_obj['Pos Index'] = i
                    #print 'FOO'
                    #print anim
            i += 1
        if not ('Pos Index' in anim_obj):
            anim_obj['Pos Index'] = 0
        if anim_obj['NumPos'] == 0:    
            anim_obj['NumPos'] = 1
    f = open('../AnimData.h', 'wt')

    f.write("// This file is autogenerated from anim/generate_anim.py\n\n")

    f.write("const static Vec2 positions[] =\n")
    f.write("{\n")                
    # for each anim datum, figure out how many anim objects and where they start in the array
    i = 0
    for p in position_data:
        f.write("    Vec2(" + p['X'] + ", " + p['Y'] + '),    // ' + str(i) + "\n")            
        i += 1
    f.write("};\n\n")

    f.write("const static AnimObjData animObjData[] =\n")
    f.write("{\n")                
    i = 0
    for o in anim_obj_data:
        #print o
        f.write("    { " + o['Asset'] + ", " + o['BlankLetterAsset'] + ", " + o['MetaLetterAsset'] + ", "+ o['SpriteAsset'] + ", " + o['Layer'] + ', ' + o['Invisible Frames'] + ", " + str(o['NumPos']) + ', &positions[' + str(o['Pos Index']) + "] },    // " + o['AnimType'] + ' ' + str(i) + "\n")
        i += 1
    f.write("};\n\n")

    f.write("const static AnimData animData[] =\n")
    f.write("{\n")                
    for i in range(0, 3):
        # for each anim datum, figure out how many anim objects and where they start in the array
        for anim in anim_data[i]:
            f.write("    { " + anim['Duration'] + ", " + anim['Loop'].lower() + ", " + str(anim['NumObjs']) + ", &animObjData[" + str(anim['Obj Index']) + "]},    // " + anim['AnimType'] + "\n")
            
    f.write("};\n\n")
    
            
        
        
def unicode_csv_DictReader(utf8_data, dialect=csv.excel, **kwargs):
    csv_reader = csv.DictReader(utf8_data, dialect=dialect, **kwargs)
    for row in csv_reader:
        # convert to unicode, stripping any Byte Order Marker
        yield [unicode(cell, 'utf-8').lstrip(unicode(codecs.BOM_UTF8, "utf8")) for cell in row]
        
def main():
    if len(sys.argv) > 1:
        print sys.argv
        #print generate_examples
    generate_anim()

if __name__ == '__main__':
    main()
