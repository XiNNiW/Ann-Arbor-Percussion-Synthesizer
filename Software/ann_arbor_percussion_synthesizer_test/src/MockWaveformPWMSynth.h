/*
 * MockWaveformPWMSynth.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKWAVEFORMPWMSYNTH_H_
#define SRC_MOCKWAVEFORMPWMSYNTH_H_

#include <AudioSynthWaveformPWMAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::AudioSynthWaveformPWMAdapterInterface;

class MockWaveformPWMSynth : public AudioSynthWaveformPWMAdapterInterface {

	MOCK_METHOD1(frequency,void(float freq));
	MOCK_METHOD1(amplitude,void(float n));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
	MOCK_METHOD0(update,void(void));
};

#endif /* SRC_MOCKWAVEFORMPWMSYNTH_H_ */
