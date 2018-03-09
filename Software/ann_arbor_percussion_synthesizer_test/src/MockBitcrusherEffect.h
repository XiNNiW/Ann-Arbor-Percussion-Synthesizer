/*
 * MockBitcrusherEffect.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKBITCRUSHEREFFECT_H_
#define SRC_MOCKBITCRUSHEREFFECT_H_

#include <BitcrusherEffectAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::BitcrusherEffectAdapterInterface;

class MockBitcrusherEffect : public BitcrusherEffectAdapterInterface {

	MOCK_METHOD1(bits,void(unsigned int b));
	MOCK_METHOD1(sampleRate,void(float hz));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
	MOCK_METHOD0(update,void(void));
};

#endif /* SRC_MOCKBITCRUSHEREFFECT_H_ */

