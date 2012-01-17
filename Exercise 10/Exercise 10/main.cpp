//
//  main.cpp
//  Exercise 10
//
//  Created by Dmitriy Starodubtsev on 15.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

int main (int *)
{

    int i = 1;
    int j = 5;
    int *ipt;
    int *jpt;
    ipt = i;
    jpt = j;
    std::cout << ipt <<std::endl;
    return 0;
}
void func(int *i, int *j) 
{
    int*tmp = i;
    *i = *j;
    *j = *tmp;
    
}