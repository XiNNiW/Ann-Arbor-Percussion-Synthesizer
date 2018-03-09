/*
 * AudioSynthSimpleDrumAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOSYNTHSIMPLEDRUMADAPTERINTERFACE_H_
#define INCLUDE_AUDIOSYNTHSIMPLEDRUMADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class AudioSynthSimpleDrumAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~AudioSynthSimpleDrumAdapterInterface();
	virtual void noteOn()=0;
	virtual void frequency(float freq)=0;
	virtual void length(int milliseconds)=0; //int32_t
	virtual void secondMix(float level)=0;
	virtual void pitchMod(float depth)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOSYNTHSIMPLEDRUMADAPTERINTERFACE_H_ */

