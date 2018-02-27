/*
 * MockKnob.h
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKKNOB_H_
#define SRC_MOCKKNOB_H_

#include <KnobInterface.h>
#include "gmock/gmock.h"

class MockKnob: public KnobInterface {
public:
	MOCK_METHOD0(getValue,int(void));
};

#endif /* SRC_MOCKKNOB_H_ */
