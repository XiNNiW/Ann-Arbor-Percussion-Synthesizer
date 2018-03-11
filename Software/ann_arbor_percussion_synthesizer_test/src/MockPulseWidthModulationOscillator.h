/*
 * MockWaveformPWMSynth.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKPULSEWIDTHMODULATIONOSCILLATOR_H_
#define SRC_MOCKPULSEWIDTHMODULATIONOSCILLATOR_H_

#include <PulseWidthModulationOscillatorAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::PulseWidthModulationOscillatorAdapterInterface;

class MockPulseWidthModulationOscillator : public PulseWidthModulationOscillatorAdapterInterface {

	MOCK_METHOD1(frequency,void(float freq));
	MOCK_METHOD1(amplitude,void(float n));

};

#endif /* SRC_MOCKPULSEWIDTHMODULATIONOSCILLATOR_H_ */
