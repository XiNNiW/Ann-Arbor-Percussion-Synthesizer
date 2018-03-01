/*
 * AudioEffectEnvelopeAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOEFFECTENVELOPEADAPTERINTERFACE_H_
#define INCLUDE_AUDIOEFFECTENVELOPEADAPTERINTERFACE_H_

namespace AnnArborPercussion {

class AudioEffectEnvelopeAdapterInterface {
public:
	virtual ~AudioEffectEnvelopeAdapterInterface()=0;
	virtual void noteOn()=0;
	virtual void noteOff()=0;
	virtual void delay(float milliseconds)=0;
	virtual void attack(float milliseconds)=0;
	virtual void hold(float milliseconds)=0;
	virtual void decay(float milliseconds)=0;
	virtual void sustain(float level)=0;
	virtual void release(float milliseconds)=0;
	virtual void releaseNoteOn(float milliseconds)=0;
	virtual void update(void);
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOEFFECTENVELOPEADAPTERINTERFACE_H_ */
