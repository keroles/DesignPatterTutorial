/*
 * main.cpp
 *
 *  Created on: Nov 28, 2023
 *      Author: Keroles Shenouda
 *      Design Pattern Course
 *      www.learn-in-depth.com
 */

#include "stdio.h"

namespace MYlib_STM32F103 {

    namespace GPIO {
        void configurePin(int pinNumber, int mode) {
            // Code to configure a general-purpose input/output (GPIO) pin
        }
    }
    namespace Application {
        void toggleLED() {
            GPIO::configurePin(13, 1); // Assuming pin 13 is connected to an LED
            // Code to toggle the LED
        }
    }
}

int main()
{
	MYlib_STM32F103::GPIO::configurePin(13, 1); // Set pin 13 as output (for LED)
	MYlib_STM32F103::Application::toggleLED();
	return 0 ;
}
