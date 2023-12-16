/*
 * main.cpp
 *
 *  Created on: Nov 28, 2023
 *      Author: Keroles Shenouda
 *      Design Pattern Course
 *      www.learn-in-depth.com
 */

#include "stdio.h"

#include "mylib.h"


extern int privateVariable ;
extern 	 void privateFunction() ;


int main()
{
//	privateVariable = 1 ;
//	printf ("privateVariable=%d \n",privateVariable);
//	privateFunction();
//	printf ("privateVariable=%d \n",privateVariable);
//	privateVariable = 3 ;
	publicFunction();
//	printf ("privateVariable=%d \n",privateVariable);

	return 0 ;
}
