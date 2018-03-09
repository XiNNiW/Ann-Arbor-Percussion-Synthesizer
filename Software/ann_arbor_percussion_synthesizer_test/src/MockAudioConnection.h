/*
 * MockAudioConnection.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKAUDIOCONNECTION_H_
#define SRC_MOCKAUDIOCONNECTION_H_

#include "gmock/gmock.h"
#include <AudioConnectionAdapterInterface.h>

using AnnArborPercussion::AudioConnectionAdapterInterface;

class MockAudioConnection : public AudioConnectionAdapterInterface {

	MOCK_METHOD0(connect,void(void));
	MOCK_METHOD0(disconnect,void(void));

};

#endif /* SRC_MOCKAUDIOCONNECTION_H_ */

