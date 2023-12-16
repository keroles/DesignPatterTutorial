/*
* main.cpp
*
* Created on: Nov 28, 2023
* Author: Keroles Shenouda
* Design Pattern Course
* www.learn-in-depth.com
*/

#include "stdio.h"
int val1 = 0 ;
namespace space1
{
int Val1 = 3 ;
void dprint_space()
{
printf("==== Space 1 ======\n");
}
//class or structure
struct Sperson
{
int weight ;
};
}
namespace space2
{
int Val1 = 7 ;
void dprint_space()
{
printf("==== Space 2 ======\n");
}
namespace nestedSpace2
{
int Val1 = 12 ;
void dprint_space()
{
printf("==== nestedSpace2======\n");
}
}
}
int main ()
{
printf (" global variable: Val1=%d \n",val1);
printf (" Space 1 : Val1=%d \n",space1::Val1);
printf (" Space 2 : Val1=%d \n",space2::Val1);
space1::dprint_space();
space2::dprint_space();
space2::nestedSpace2::dprint_space();
space1::Sperson ahmed ;
ahmed.weight = 70 ;
printf (" Space 1 struct : ahmed.weight=%d \n",ahmed.weight);
return 0 ;
}


