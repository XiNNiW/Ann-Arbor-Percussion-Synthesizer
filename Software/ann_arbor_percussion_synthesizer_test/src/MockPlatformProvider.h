/*
 * MockPlatformProvider.h
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKPLATFORMPROVIDER_H_
#define SRC_MOCKPLATFORMPROVIDER_H_

#include <PlatformProviderInterface.h>
#include <KnobInterface.h>
#include "gmock/gmock.h"

class MockPlatformProvider: public PlatformProviderInterface {
public:
	MOCK_METHOD3(createKnob,KnobInterface*(int pinNumber, int minValue, int maxValue));
};

#endif /* SRC_MOCKPLATFORMPROVIDER_H_ */

