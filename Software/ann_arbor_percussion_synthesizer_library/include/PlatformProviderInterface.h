/*
 * PlatformProviderInterface.h
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#ifndef PLATFORMPROVIDERINTERFACE_H_
#define PLATFORMPROVIDERINTERFACE_H_

#include "KnobInterface.h"

class PlatformProviderInterface {
public:
	virtual ~PlatformProviderInterface(){};
	virtual KnobInterface* createKnob(int knobNumber, int minValue, int maxValue)=0;
	// TriggerInterface* createDrumTrigger (int triggerNumber)
};



#endif /* PLATFORMPROVIDERINTERFACE_H_ */
