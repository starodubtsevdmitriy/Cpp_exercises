//
//  main.cpp
//  Exercise 14
//
//  Created by Dmitriy Starodubtsev on 17.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include<iostream>
#include<iostream>
char f(char a)
{
    return a;
}
char g(char& b)
{
    return b;
}
char h(const char& c)
{
    return c;
}
int main (int argc, const char * argv[])
{
    
    char val = 'a';
    int val1 = 49;
    int val2 = 3300;
    char c;
    unsigned char uc;
    signed char sc;
    f(val);
    g(val);     
    h(val);
    f(val1);
  //g(val1);     
    h(val1);
    f(val2);
  //g(val2);     
    h(val2);
    f(c);
    g(c);     
    h(c);
    f(uc);
  //g(uc);     
    h(uc);
    f(sc);
 // g(sc);     
    h(sc);
    return 0;
}

