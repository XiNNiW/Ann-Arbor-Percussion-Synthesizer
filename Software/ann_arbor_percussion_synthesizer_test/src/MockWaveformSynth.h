/*
 * MockWaveformSynth.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKWAVEFORMSYNTH_H_
#define SRC_MOCKWAVEFORMSYNTH_H_

#include <AudioSynthWaveformAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::AudioSynthWaveformAdapterInterface;

class MockWaveformSynth: public AudioSynthWaveformAdapterInterface {

	MOCK_METHOD1(frequency,void(float freq));
	MOCK_METHOD1(phase,void(float angle));
	MOCK_METHOD1(amplitude,void(float n));
	MOCK_METHOD1(offset,void(float n));
	MOCK_METHOD1(pulseWidth,void(float n));
	MOCK_METHOD1(begin,void(short t_type));
	MOCK_METHOD3(begin,void(float t_amp, float t_freq, short t_type));
	MOCK_METHOD2(arbitraryWaveform,void(const int *data, float maxFreq));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
	MOCK_METHOD0(update,void(void));

};

#endif /* SRC_MOCKWAVEFORMSYNTH_H_ */

