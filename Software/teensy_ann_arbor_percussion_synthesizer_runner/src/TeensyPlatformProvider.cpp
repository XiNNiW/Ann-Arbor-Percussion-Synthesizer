/*
 * TeensyPlatformProvider.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#include "TeensyPlatformProvider.h"
#include "TeensyKnob.h"

TeensyPlatformProvider::TeensyPlatformProvider() {}

TeensyPlatformProvider::~TeensyPlatformProvider() {}

KnobInterface* TeensyPlatformProvider::createKnob(int knobNumber, int minValue, int maxValue){
	return new TeensyKnob(knobNumber,minValue,maxValue);
}
