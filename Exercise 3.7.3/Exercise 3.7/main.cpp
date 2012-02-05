//
//  main.cpp
//  Exercise 3.7
//
//  Created by Dmitriy Starodubtsev on 05.02.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
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

bool stringEqualTostring (char * str1, char * str2)
{
    if (strlen(str1)!=strlen(str2)) 
    { 
        return 0;
    }
    int count=stringLengs(str1)+1;
    while(*str1++==*str2++)
    {
        --count;
    }
    if (count) 
    {
        return 0;  
    }
    return 1;
}

int main (int argc, const char * argv[])
{
    char string1[] = {"may string"};
    char string2[] = {"may string"};
    cout<<stringEqualTostring(string1, string2)<<endl;
}

