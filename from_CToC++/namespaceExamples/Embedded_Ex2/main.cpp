/*
 * main.cpp
 *
 *  Created on: Nov 28, 2023
 *      Author: Keroles Shenouda
 *      Design Pattern Course
 *      www.learn-in-depth.com
 */

#include "stdio.h"
namespace HardwareV1 {
	void setupTimer() { /* Timer setup for version 1 hardware */ }
}

namespace HardwareV2 {
	void setupTimer() { /* Timer setup for version 2 hardware */ }
}

namespace HW = HardwareV1; // Alias depending on the version being used

int main() {

	HW::setupTimer(); // Sets up the timer for the specific hardware version
return 0;
}
