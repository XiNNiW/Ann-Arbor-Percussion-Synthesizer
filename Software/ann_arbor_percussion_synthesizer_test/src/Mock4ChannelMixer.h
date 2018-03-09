/*
 * Mock4ChannelMixer.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCK4CHANNELMIXER_H_
#define SRC_MOCK4CHANNELMIXER_H_

#include <Mixer4AdapterInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::Mixer4AdapterInterface;

class Mock4ChannelMixer : public Mixer4AdapterInterface {
	MOCK_METHOD2(gain,void(unsigned int channel, float gain));

	MOCK_METHOD0(processorUsage,int(void));
	MOCK_METHOD0(processorUsageMax,int(void));
	MOCK_METHOD0(processorUsageMaxReset,void(void));
	MOCK_METHOD0(isActive,bool(void));
	MOCK_METHOD0(update,void(void));
};

#endif /* SRC_MOCK4CHANNELMIXER_H_ */
