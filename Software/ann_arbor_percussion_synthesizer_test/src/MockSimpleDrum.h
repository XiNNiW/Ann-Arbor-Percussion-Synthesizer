/*
 * MockSimpleDrum.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKSIMPLEDRUM_H_
#define SRC_MOCKSIMPLEDRUM_H_

#include <SimpleDrumAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::SimpleDrumAdapterInterface;

class MockSimpleDrum : public SimpleDrumAdapterInterface {

	MOCK_METHOD0(noteOn,void(void));
	MOCK_METHOD1(frequency,void(float freq));
	MOCK_METHOD1(length,void(int milliseconds));
	MOCK_METHOD1(secondMix,void(float level));
	MOCK_METHOD1(pitchMod,void(float depth));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
	MOCK_METHOD0(update,void(void));
};

#endif /* SRC_MOCKSIMPLEDRUM_H_ */


