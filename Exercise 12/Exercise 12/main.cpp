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
    struct Months
    {
        std::string namesOfMonths[12];
        int dayInEachMonths[3];
    };
    Months tabl;
    std::string months[]={"January","February","Mach","April","May","June","July","August","September","October","November","December"};
    int days[]={28,30,31};
    for (int i = 0; i < 12; i++)
    {
        tabl.namesOfMonths[i] = months[i];
        if (i < 3) 
        {
            tabl.dayInEachMonths[i] = days[i];
        }
        std::cout<<months[i]<<" ";
        if (i != 1)
        {
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
    std::cout<<std::endl;
    for (int j = 0; j < 12; j++)
    {
        std::cout<<tabl.namesOfMonths[j]<<" ";
        if (j != 1)
        {
            if((j+1)%2 == 0)
            {
                std::cout<<tabl.dayInEachMonths[1]<<'\n';
            }
            else 
            {
                std::cout<<tabl.dayInEachMonths[2]<<'\n';
            }
        }
        else
        {
            std::cout<<tabl.dayInEachMonths[0]<<'\n';
        }
    }
}

