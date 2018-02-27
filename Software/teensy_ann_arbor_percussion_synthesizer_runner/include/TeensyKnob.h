/*
 * TeensyKnob.h
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#ifndef TEENSYKNOB_H_
#define TEENSYKNOB_H_

#include <KnobInterface.h>

class TeensyKnob : public KnobInterface{
public:
	TeensyKnob(int pinNumber, int minValue, int maxValue);
	virtual ~TeensyKnob();
	int getValue();
private:
	int pinNumber;
	int minValue;
	int maxValue;
	static const int HARDWARE_MINIMUM = 0;
	static const int HARDWARE_MAXIMUM = 1023;
};

#endif /* TEENSYKNOB_H_ */
