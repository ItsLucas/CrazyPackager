//
//  SnappyAPI.cpp
//  CrazyPackager
//
//  Created by Lucas on 7/29/15.
//  Copyright © 2015 CrazyMCP. All rights reserved.
//

#include "SnappyAPI.hpp"
#include <string.h>

using namespace std;
void bytes2file(byte* pByte,string filename)
{
    FILE *f;
    f=fopen(filename.c_str(),"wb");
    fwrite(pByte,1,sizeof(pByte),f);
    fclose(f);
}
byte* file2bytes(string filename)
{
    FILE *f;
    byte* pByte;
    f=fopen(filename.c_str(),"r");
    fread(pByte, 1, sizeof(pByte), f);
    fclose(f);
    return pByte;
}
