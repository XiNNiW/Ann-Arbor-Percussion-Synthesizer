/*
 * MockWaveformSynth.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKWAVEFORMOSCILLATOR_H_
#define SRC_MOCKWAVEFORMOSCILLATOR_H_

#include <WaveformOscillatorAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::WaveformOscillatorAdapterInterface;

class MockWaveformOscillator: public WaveformOscillatorAdapterInterface {

	MOCK_METHOD1(frequency,void(float freq));
	MOCK_METHOD1(phase,void(float angle));
	MOCK_METHOD1(amplitude,void(float n));
	MOCK_METHOD1(offset,void(float n));
	MOCK_METHOD1(pulseWidth,void(float n));
	MOCK_METHOD1(begin,void(short t_type));
	MOCK_METHOD3(begin,void(float t_amp, float t_freq, short t_type));
	MOCK_METHOD2(arbitraryWaveform,void(const short int *data, float maxFreq));


};

#endif /* SRC_MOCKWAVEFORMOSCILLATOR_H_ */
