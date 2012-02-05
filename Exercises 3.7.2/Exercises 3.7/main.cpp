//
//  main.cpp
//  Exercises 3.7
//
//  Created by Dmitriy Starodubtsev on 05.02.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <string>
#include <map>
#include <cctype>
#include <sstream>

using namespace std;

void stringCopy (char * target, char * sourse)
{
    while ((*target++ = *sourse++));
}

int main (int argc, const char * argv[])
{
    char buffer[150];
    char string[] = {"my string"};
    stringCopy (buffer, string);
    cout<<buffer<<endl;
}

