//
//  SnappyAPI.hpp
//  CrazyPackager
//
//  Created by Lucas on 7/29/15.
//  Copyright © 2015 CrazyMCP. All rights reserved.
//

#ifndef SnappyAPI_cpp
#define SnappyAPI_cpp

#include <stdio.h>
#include <iostream>
#include "CrazyPackager/utils/snappy/snappy.h"
using namespace std;
typedef unsigned char byte;
int compress(string inputpath,string outputpath);
byte* file2bytes(string filename);
void bytes2file(byte* pByte,string filename);

#endif /* SnappyAPI_cpp */
