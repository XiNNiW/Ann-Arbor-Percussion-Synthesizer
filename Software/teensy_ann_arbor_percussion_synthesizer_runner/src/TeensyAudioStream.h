/*
 * TeensyAudioStream.h
 *
 *  Created on: Mar 12, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYAUDIOSTREAM_H_
#define SRC_TEENSYAUDIOSTREAM_H_

#include <AudioStreamAdapterInterface.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyAudioStream{
public:
	virtual ~TeensyAudioStream();
	virtual AudioStream* getStream()=0;
	virtual AudioConnection* createConnection(AudioStream &dest)=0;
	virtual AudioConnection* createConnection(AudioStream &dest, unsigned char output_channel, unsigned char input_channel)=0;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYAUDIOSTREAM_H_ */
