/*
 * KnobInterface.h
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw, Joe, Bill
 *
 */

#ifndef KNOBINTERFACE_H_
#define KNOBINTERFACE_H_

class KnobInterface {
public:
	KnobInterface();
	virtual ~KnobInterface();
	virtual int getValue()=0;
};

#endif /* KNOBINTERFACE_H_ */

