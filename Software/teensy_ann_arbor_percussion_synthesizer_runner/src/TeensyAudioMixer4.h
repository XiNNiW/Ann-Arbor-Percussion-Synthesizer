/*
 * TeensyAudioMixer4.h
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYAUDIOMIXER4_H_
#define SRC_TEENSYAUDIOMIXER4_H_

#include <Mixer4AdapterInterface.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyAudioMixer4: public Mixer4AdapterInterface {
public:
	virtual ~TeensyAudioMixer4();
	TeensyAudioMixer4();
	void gain(unsigned int channel, float gain);
private:
	AudioMixer4* mixer;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYAUDIOMIXER4_H_ */
