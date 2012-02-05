//
//  main.cpp
//  Exercise 3
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

int stringLengs (char * str)
{
    int lenth = 0;
    while (str[lenth] != '\0') {
        ++lenth;
    }
    return lenth;
}


int main (int argc, const char * argv[])
{
    char string[] = {"my string"};
    int len = stringLengs(string);
    cout<<len<<endl;   
}

