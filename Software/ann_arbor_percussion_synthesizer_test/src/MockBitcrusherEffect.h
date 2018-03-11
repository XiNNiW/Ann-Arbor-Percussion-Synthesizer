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
};

#endif /* SRC_MOCKBITCRUSHEREFFECT_H_ */

