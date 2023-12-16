/*
 * main.cpp
 *
 *  Created on: Nov 28, 2023
 *      Author: Keroles Shenouda
 *      Design Pattern Course
 *      www.learn-in-depth.com
 */

#include "stdio.h"

namespace Peripherals {
	namespace UART {
		void init() { /* Initialize UART settings */ }
		void send(char* data) { /* Send data over UART */ }
	}

	namespace SPI {
		void init() { /* Initialize SPI settings */ }
		void transfer(unsigned char data) { /* Transfer data over SPI */ }
	}

	namespace I2C {
		void init() { /* Initialize I2C settings */ }
		void write(unsigned char address, unsigned char data) { /* Write data over I2C */ }
		}
}

int main() {
	Peripherals::UART::init();
	Peripherals::SPI::init();
	Peripherals::I2C::init();

	// Usage of peripherals
	Peripherals::UART::send("Hello UART");
	Peripherals::SPI::transfer(0xA5);
	Peripherals::I2C::write(0x50, 0x1B);

	return 0;
}


