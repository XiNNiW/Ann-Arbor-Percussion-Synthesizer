/*
 * MockEnvelopeEffect.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKENVELOPEEFFECT_H_
#define SRC_MOCKENVELOPEEFFECT_H_

#include <AudioEffectEnvelopeAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::AudioEffectEnvelopeAdapterInterface;

class MockEnvelopeEffect : public AudioEffectEnvelopeAdapterInterface {

	MOCK_METHOD0(noteOn,void(void));
	MOCK_METHOD0(noteOff,void(void));
	MOCK_METHOD1(delay,void(float milliseconds));
	MOCK_METHOD1(attack,void(float milliseconds));
	MOCK_METHOD1(hold,void(float milliseconds));
	MOCK_METHOD1(decay,void(float milliseconds));
	MOCK_METHOD1(sustain,void(float level));
	MOCK_METHOD1(release,void(float milliseconds));
	MOCK_METHOD1(releaseNoteOn,void(float milliseconds));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
	MOCK_METHOD0(update,void(void));
};

#endif /* SRC_MOCKENVELOPEEFFECT_H_ */


