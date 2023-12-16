/*
 * main.cpp
 *
 *  Created on: Nov 28, 2023
 *      Author: Keroles Shenouda
 *      Design Pattern Course
 *      www.learn-in-depth.com
 */

#include "stdio.h"

namespace GPIO_Library {

    inline namespace Version1 {
        void gpio_init() {
            // Version 1 implementation
        	printf("Version 1  implementation \n");
        }
    }

    /* inline */ namespace Version2 {
        void gpio_init() {
            // Version 2 implementation
        	printf("Version 2  implementation \n");
        }
    }
}

int main()
{
	// Because Version1 is an inline namespace, you can call gpio_init like this:
	GPIO_Library::gpio_init(); // Calls the Version1 implementation

	// If you want to use the Version2 function, you must specify the namespace (assuming it's not inline):
	GPIO_Library::Version2::gpio_init(); // Calls the Version 2 implementation

	return 0 ;
}
