/*
 * AudioSynthNoiseWhiteAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOSYNTHNOISEWHITEADAPTERINTERFACE_H_
#define INCLUDE_AUDIOSYNTHNOISEWHITEADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class AudioSynthNoiseWhiteAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~AudioSynthNoiseWhiteAdapterInterface();
	virtual void amplitude(float n)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOSYNTHNOISEWHITEADAPTERINTERFACE_H_ */

