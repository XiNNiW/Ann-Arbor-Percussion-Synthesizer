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

};

#endif /* SRC_MOCKWHITENOISEGENERATOR_H_ */
