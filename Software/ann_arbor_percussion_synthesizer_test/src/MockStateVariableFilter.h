/*
 * MockStateVariableFilter.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKSTATEVARIABLEFILTER_H_
#define SRC_MOCKSTATEVARIABLEFILTER_H_

#include <StateVariableFilterAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::StateVariableFilterAdapterInterface;

class MockStateVariableFilter : public StateVariableFilterAdapterInterface {
	MOCK_METHOD1(frequency,void(float freq));
	MOCK_METHOD1(resonance,void(float q));
	MOCK_METHOD1(octaveControl,void(float n));
};

#endif /* SRC_MOCKSTATEVARIABLEFILTER_H_ */

