//
//  main.cpp
//  C++
//
//  Created by Dmitriy Starodubtsev on 19.12.11.
//  Copyright (c) 2011 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <string.h>
/*Упр. 6.
void values()
{   
char numbers[] = "0123456789";
char leters[] = "abcdefghijklmnopqrstuvwxqz";
long int numbersSize = strlen(numbers);
long int letersSize = strlen(leters);
    for (int i=0; i<numbersSize; i++)
    {
        char ch = numbers[i];
        std::cout << '\''<< ch << '\''
        << " = " <<int(ch)
        << " = 0" << std::oct(ch)
        << " = 0x" << std::hex(ch) << '\n';
    }
    for (int i=0; i<numbersSize; i++)
    {
        char ch1 = numbers[i];
        std::cout << '\''<< ch1 << '\''
        << " = " <<int(ch1)
        << " = 0" << std::oct(ch1)
        << " = 0x" << std::hex(ch1) << '\n';
    }

}
 */
/*
 Глава 2
 Упр. 1.
 */
void exchange() 
{ 
    int* temp;
    int* i;
    int* j;
    temp = i;
    i = j;
    j = temp;
    
    
}
int main (int argc, const char * argv[])
{
    //int i,b; 
    //std::cin>>i;
    //std::cin>>b;
    //std::cout << i+b << std::endl;
    //insert code here...
    std::cout << "Hello, World!\n";
    std::cout << "sizeof(short) = " <<sizeof(int)<<std::endl;
    std::cout << "sizeof(short int) = " <<sizeof(short int)<<std::endl;
    std::cout << "sizeof(long int) = " <<sizeof(long int)<<std::endl;
    std::cout << "sizeof(char) = " <<sizeof(char)<<std::endl;
    std::cout << "sizeof(float) = " <<sizeof(float)<<std::endl;
    std::cout << "sizeof(double long) = " <<sizeof(double long)<<std::endl;
    std::cout << "sizeof(double) = " <<sizeof(double)<<std::endl;
    return 0;
}

/*
Глава 2
Упр. 2.
 
char ch;                                                   char ch = "i"; 
int count = 1;                                             int count;
char* name = "Njal";                                       char* name;
struct complex { float re, im; };                          struct complex;
complex cvar;                                              complex cvar(1.0, 2.0)
extern complex sqrt(complex);                              extern complex sqrt(complex){/.../};
extern int error_number;                                   extern int error_number{/.../};
typedef complex point;                                     typedef complex point{/.../};
float real(complex* p) { return p->re; };                  float real(complex* p)
const double pi = 3.1415926535897932385;                   const double pi;
struct user;                                               struct user{/.../};
template<class T> abs(T a) { return a<0 ? -a : a; }        template<class T> abs(T a);
enum beer { Carlsberg, Tuborg, Thor };                     enum beer;

Упр. 3.
cahr* ch = "!";
int i[10] = {0,1,2,3,4,5,6,7,8,9};
int &i[10] = {0,1,2,3,4,5,6,7,8,9};
char (*i)[]= "123";
char** ch = "2";
int const i = 6;
const int* i = 1;
*/

