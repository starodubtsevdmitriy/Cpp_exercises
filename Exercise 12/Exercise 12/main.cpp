//
//  main.cpp
//  Exercise 12
//
//  Created by Dmitriy Starodubtsev on 16.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <strings.h>
#include <stdlib.h>
#include <struct.h>
#include <string.h>
int main (int argc, const char * argv[])
{
    std::string months[]={"January","February","Mach","April","May","June","July","August","September","October","November","December"};
    int days[]={28,30,31};
    for (int i = 0; i < 12; i++)
    {
      std::cout<<months[i]<<" ";
        if (i != 1) {
        if((i+1)%2 == 0)
        {
           std::cout<<days[1]<<'\n';
        }
        else 
        {
           std::cout<<days[2]<<'\n'; 
        }
        }
        else
        {
            std::cout<<days[0]<<'\n'; 
        }
        
    }
    struct months
    {
        std::string* naymsOfMonths[1];
        int* DayInEachMonths[3];
    };
    char str[15] ={"a short string"};
    }

