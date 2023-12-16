/*
 * mylib.cpp
 *
 *  Created on: Nov 28, 2023
 *      Author: Keroles Shenouda
 *      Design Pattern Course
 *      www.learn-in-depth.com
 */


#include "mylib.h"
#include "stdio.h"

namespace {
// This variable is also private to this file
 int privateVariable  = 1 ;

 void privateFunction() {
     // This function can only be used in this file
	printf ("privateFunction Start :  privateVariable=%d \n ",privateVariable);
	privateVariable = 7 ;
	printf ("privateFunction End :  privateVariable=%d \n ",privateVariable);

 }
}

void publicFunction() {
	// This is okay, as it's in the same file
	    // Do something else
    privateFunction();
}
