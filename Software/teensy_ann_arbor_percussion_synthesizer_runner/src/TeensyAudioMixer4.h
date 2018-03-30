/*
 * TeensyAudioMixer4.h
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYAUDIOMIXER4_H_
#define SRC_TEENSYAUDIOMIXER4_H_

#include <Mixer4AdapterInterface.h>
#include <TeensyAudioStream.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyAudioMixer4: public Mixer4AdapterInterface, public TeensyAudioStream {
public:
	virtual ~TeensyAudioMixer4();
	TeensyAudioMixer4();
	void gain(unsigned int channel, float gain);
	AudioStream* getStream();
	virtual AudioConnection* createConnection(AudioStream &dest);
	virtual AudioConnection* createConnection(AudioStream &dest, unsigned char output_channel, unsigned char input_channel);

private:
	AudioMixer4 mixer;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYAUDIOMIXER4_H_ */
