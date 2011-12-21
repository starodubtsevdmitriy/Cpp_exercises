//
//  main.cpp
//  Eercise5
//
//  Created by Dmitriy Starodubtsev on 21.12.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//
#include <string.h>
#include <iostream>

int main (int argc, const char * argv[])
{
    /*Упр. 5.
     */
   
      
        char numbers[] = "0123456789";
        char leters[] = "abcdefghijklmnopqrstuvwxqz";
        long int numbersSize = strlen(numbers);
        long int letersSize = strlen(leters);
        for (int i=0; i<numbersSize; i++)
        {
            char ch = numbers[i];
            std::cout << '\''<< ch << '\''
            << " = " <<int(ch)<< '\n';
          //<< " = 0" << std::oct(ch)
          //<< " = 0x" << std::hex(ch) << '\n';
        }
        for (int j=0; j<letersSize; j++)
        {
            char ch1 = leters[j];
            std::cout << '\''<< ch1 << '\''
            << " = " <<int(ch1)<< '\n';
         // << " = 0" << std::oct(ch1)
         // << " = 0x" << std::hex(ch1) << '\n';
        }
        
    return 0;

}

