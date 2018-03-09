/*
 * MockWhiteNoiseSynth.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKWHITENOISEGENERATOR_H_
#define SRC_MOCKWHITENOISEGENERATOR_H_

#include <WhiteNoiseGeneratorAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::WhiteNoiseGeneratorAdapterInterface;

class MockWhiteNoiseGenerator : public WhiteNoiseGeneratorAdapterInterface {

	MOCK_METHOD1(amplitude,void(float n));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
	MOCK_METHOD0(update,void(void));
};

#endif /* SRC_MOCKWHITENOISEGENERATOR_H_ */
