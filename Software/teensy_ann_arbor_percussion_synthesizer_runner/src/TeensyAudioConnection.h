/*
 * TeensyAudioConnection.h
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYAUDIOCONNECTION_H_
#define SRC_TEENSYAUDIOCONNECTION_H_

#include <AudioConnectionAdapterInterface.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyAudioConnection: public AudioConnectionAdapterInterface {
public:
	TeensyAudioConnection(AudioStreamAdapterInterface* source, AudioStreamAdapterInterface* destination);
	TeensyAudioConnection(AudioStreamAdapterInterface* source, int outputChannel, AudioStreamAdapterInterface* destination, int inputChannel);
	virtual ~TeensyAudioConnection();
	virtual void connect(void);
	virtual void disconnect(void);
private:
	AudioConnection* connection;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYAUDIOCONNECTION_H_ */
