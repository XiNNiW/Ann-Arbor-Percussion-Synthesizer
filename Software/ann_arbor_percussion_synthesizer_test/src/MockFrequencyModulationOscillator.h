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

};

#endif /* SRC_MOCKFREQUENCYMODULATIONOSCILLATOR_H_ */

