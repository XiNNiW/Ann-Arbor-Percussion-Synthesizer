/*
 * TeensyPlatformProvider.h
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#ifndef TEENSYPLATFORMPROVIDER_H_
#define TEENSYPLATFORMPROVIDER_H_

#include <PlatformProviderInterface.h>

class TeensyPlatformProvider : public PlatformProviderInterface {
public:
	TeensyPlatformProvider();
	virtual ~TeensyPlatformProvider();
	KnobInterface* createKnob(int knobNumber, int minValue, int maxValue);
};

#endif /* TEENSYPLATFORMPROVIDER_H_ */
