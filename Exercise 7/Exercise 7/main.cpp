//
//  main.cpp
//  Exercise 7
//
//  Created by Dmitriy Starodubtsev on 18.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>

int pow_two(int n)
{
	if ( n < 0 )
	{
		std::cout << "Negativ parameter." << std::endl;
		return 0;
	}
	switch ( n )
	{
        case 0: return 1;
        case 1: return 2;
        default: return 2 * pow_two(n-1);
	}
}

void PrintBinStr(unsigned iVal, char cQuanBits)
{
	for(int i = cQuanBits - 1; i >= 0; --i)
	{
		if(iVal & pow_two(i))
		{
			std::cout << '1';
		}
		else
		{
			std::cout << '0';
		}
	}
}

void PrintDoubleStruct(double dblVal)
{
	struct DoubleStruct
	{
		unsigned uiMant2 : 32;
		unsigned uiMant1 : 20;
		unsigned uiExp : 11;
		unsigned uiSign : 1;
	};
    
	union Fudge
	{
		double dblVal;
		DoubleStruct DoubleStruct;
	};
    
	Fudge fd;
	fd.dblVal = dblVal;
    
	std::cout << "Binary view:" << std::endl;
	PrintBinStr(fd.DoubleStruct.uiSign, 1);
	std::cout << ' ';
	PrintBinStr(fd.DoubleStruct.uiExp, 11);
	std::cout << ' ';
	PrintBinStr(fd.DoubleStruct.uiMant1, 20);
	PrintBinStr(fd.DoubleStruct.uiMant2, 32);
	std::cout <<std::endl;
    
	std::cout << "Sign = " << fd.DoubleStruct.uiSign << "; Exp = " << fd.DoubleStruct.uiExp;
    
	long long llMant = fd.DoubleStruct.uiMant1;
	llMant <<= 32;
	llMant += fd.DoubleStruct.uiMant2;
	std::cout << "; Mant = " << llMant << ';' << std::endl;

}

int main()
{
	double dblVal;
	std::cout << "For exit type value large then 200.0" << std::endl;
	do
	{
		std::cin >> dblVal;
		PrintDoubleStruct(dblVal);
	}while(dblVal < 200);
    
	system("stop");
}
