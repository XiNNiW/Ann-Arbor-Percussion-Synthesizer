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



// // Brings in Google Mock.
//class MockTurtle : public Turtle {
// public:
//  ...
//  MOCK_METHOD0(PenUp, void());
//  MOCK_METHOD0(PenDown, void());
//  MOCK_METHOD1(Forward, void(int distance));
//  MOCK_METHOD1(Turn, void(int degrees));
//  MOCK_METHOD2(GoTo, void(int x, int y));
//  MOCK_CONST_METHOD0(GetX, int());
//  MOCK_CONST_METHOD0(GetY, int());
//};
#endif /* SRC_MOCKPLATFORMPROVIDER_H_ */

