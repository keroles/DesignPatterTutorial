/*
* main.cpp
*
* Created on: Nov 28, 2023
* Author: Keroles Shenouda
* Design Pattern Course
* www.learn-in-depth.com
*/

#include "stdio.h"
namespace SensorModule {
void readTemperature() { /* Read temperature sensor */ }
void readPressure() { /* Read pressure sensor */ }
}

namespace ActuatorModule {
void setValvePosition(int position) { /* Control a valve actuator */ }
void setMotorSpeed(int speed) { /* Control motor speed */ }
}

namespace CommunicationModule {
void sendData(const char* data) { /* Send data over the communication module */ }
}

int main() {
SensorModule::readTemperature();
ActuatorModule::setValvePosition(3);
CommunicationModule::sendData("Sensor data");

return 0;
}



