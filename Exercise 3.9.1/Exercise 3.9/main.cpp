//
//  main.cpp
//  Exercise 3.9
//
//  Created by Dmitriy Starodubtsev on 06.02.12.
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

int stringLengs (char * str)
{
    int lenth = 0;
    while (str[lenth] != '\0') {
        ++lenth;
    }
    return lenth;
}

char* stringToChar (string str)
{
    char * buff = new char[255];
    for ( int i = 0; str[i] == '\0'; i++)
    {
        buff = &str[i];
    }
}

char* stringByAppendingString(char * str1, char * str2)
{
    char * buff = new char[255];
    for (int i = 0; i <= stringLengs(str1) + stringLengs(str2); i++) 
    {
        if (i <= stringLengs(str1)-1) 
        {
            buff[i] = str1[i];
        }
        if (i > stringLengs(str1)-1) 
        {
            buff[i] = str2[i-stringLengs(str1)];
        }
    }
    return buff;
}

int main (int argc, const char * argv[])
{
    char string1[] = {"My old string "};
    char string2[] = {"plus my new string"};
    cout<<stringByAppendingString (string1, string2)<<endl;
}

