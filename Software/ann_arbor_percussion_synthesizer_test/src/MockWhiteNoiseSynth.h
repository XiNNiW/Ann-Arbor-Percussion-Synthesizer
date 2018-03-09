/*
 * MockWhiteNoiseSynth.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKWHITENOISESYNTH_H_
#define SRC_MOCKWHITENOISESYNTH_H_

#include <AudioSynthNoiseWhiteAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::AudioSynthNoiseWhiteAdapterInterface;

class MockWhiteNoiseSynth : public AudioSynthNoiseWhiteAdapterInterface {

	MOCK_METHOD1(amplitude,void(float n));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
	MOCK_METHOD0(update,void(void));
};

#endif /* SRC_MOCKWHITENOISESYNTH_H_ */
