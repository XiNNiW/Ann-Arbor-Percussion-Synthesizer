/*
 * TeensyAudioOutputI2S.h
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYAUDIOOUTPUTI2S_H_
#define SRC_TEENSYAUDIOOUTPUTI2S_H_
#include <Audio.h>
#include <AudioOutputI2SAdapterInterface.h>

namespace AnnArborPercussion {

class TeensyAudioOutputI2S: public AudioOutputI2SAdapterInterface {
public:
	virtual ~TeensyAudioOutputI2S();
	TeensyAudioOutputI2S();
	void begin();
private:
	AudioOutputI2S* output;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYAUDIOOUTPUTI2S_H_ */
