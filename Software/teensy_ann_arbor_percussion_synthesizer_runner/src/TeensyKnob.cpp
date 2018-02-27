/*
 * TeensyKnob.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#include "TeensyKnob.h"
#include "Arduino.h"

TeensyKnob::TeensyKnob(int pinNumber, int minValue, int maxValue) {
	this->pinNumber = pinNumber;
	this->minValue = minValue;
	this->maxValue = maxValue;
}

TeensyKnob::~TeensyKnob() {}

int TeensyKnob::getValue() {
	int analogValue = analogRead(this->pinNumber);
	return map(analogValue, HARDWARE_MINIMUM, HARDWARE_MAXIMUM, this->minValue,
			this->maxValue);
}

