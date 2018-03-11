/*
 * MockI2SOutput.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKI2SOUTPUT_H_
#define SRC_MOCKI2SOUTPUT_H_

#include <AudioOutputI2SAdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::AudioOutputI2SAdapterInterface;

class MockI2SOutput : public AudioOutputI2SAdapterInterface {
	MOCK_METHOD0(begin,void(void));

};

#endif /* SRC_MOCKI2SOUTPUT_H_ */
