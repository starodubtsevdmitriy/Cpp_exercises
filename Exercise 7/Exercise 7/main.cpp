//
//  main.cpp
//  Exercise 7
//
//  Created by Dmitriy Starodubtsev on 18.01.12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <math.h>

void showDouble(double d)
{
	int i=0;
    
	while ( pow(d,2) > 100) 
	{
		d /= 10;
		i++;
	}
    char sign[]="+-";
    if (d < 0)
    {
        d*=-1;
        std::cout << "Sign:" << sign[1] << std::endl;
    }
    else
    {
        std::cout << "Sign:" << sign[0] << std::endl;
    }
	std::cout << "mantissa = " << d <<std::endl;
	std::cout << "Order = " << i <<std::endl;
}

int main()
{
	double d;
    std::cout<<"Enter D:";
    std::cin>>d;
	showDouble(d);
	
	return 0;
}
