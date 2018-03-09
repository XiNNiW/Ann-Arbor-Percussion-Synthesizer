/*
 * AudioEffectEnvelopeAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_ENVELOPEEFFECTADAPTERINTERFACE_H_
#define INCLUDE_ENVELOPEEFFECTADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class EnvelopeEffectAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~EnvelopeEffectAdapterInterface();
	virtual void noteOn()=0;
	virtual void noteOff()=0;
	virtual void delay(float milliseconds)=0;
	virtual void attack(float milliseconds)=0;
	virtual void hold(float milliseconds)=0;
	virtual void decay(float milliseconds)=0;
	virtual void sustain(float level)=0;
	virtual void release(float milliseconds)=0;
	virtual void releaseNoteOn(float milliseconds)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_ENVELOPEEFFECTADAPTERINTERFACE_H_ */

