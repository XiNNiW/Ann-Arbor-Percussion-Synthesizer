/*
 * MockStateVariableFilter.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKSTATEVARIABLEFILTER_H_
#define SRC_MOCKSTATEVARIABLEFILTER_H_

#include <AudioFilterStateVariableAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::AudioFilterStateVariableAdapterInterface;

class MockStateVariableFilter : public AudioFilterStateVariableAdapterInterface {
	MOCK_METHOD1(frequency,void(float freq));
	MOCK_METHOD1(resonance,void(float q));
	MOCK_METHOD1(octaveControl,void(float n));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
	MOCK_METHOD0(update,void(void));
};

#endif /* SRC_MOCKSTATEVARIABLEFILTER_H_ */

