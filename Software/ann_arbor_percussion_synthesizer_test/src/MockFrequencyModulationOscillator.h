/*
 * MockModulatedSineWaveformSynth.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKFREQUENCYMODULATIONOSCILLATOR_H_
#define SRC_MOCKFREQUENCYMODULATIONOSCILLATOR_H_

#include <FrequencyModulatedSineOscillatorAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::FrequencyModulatedSineOscillatorAdapterInterface;

class MockFrequencyModulationOscillator: public FrequencyModulatedSineOscillatorAdapterInterface {
	MOCK_METHOD1(frequency,void(float freq));
	MOCK_METHOD1(phase,void(float angle));
	MOCK_METHOD1(amplitude,void(float n));
	MOCK_METHOD0(update,void(void));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
};

#endif /* SRC_MOCKFREQUENCYMODULATIONOSCILLATOR_H_ */

