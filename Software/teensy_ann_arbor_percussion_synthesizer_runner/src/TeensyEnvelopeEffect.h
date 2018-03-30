/*
 * TeensyEnvelopeEffect.h
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYENVELOPEEFFECT_H_
#define SRC_TEENSYENVELOPEEFFECT_H_

#include <EnvelopeEffectAdapterInterface.h>
#include <TeensyAudioStream.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyEnvelopeEffect: public EnvelopeEffectAdapterInterface, public TeensyAudioStream {
public:
	TeensyEnvelopeEffect();
	virtual ~TeensyEnvelopeEffect();
	void noteOn();
	void noteOff();
	void delay(float milliseconds);
	void attack(float milliseconds);
	void hold(float milliseconds);
	void decay(float milliseconds);
	void sustain(float level);
	void release(float milliseconds);
	void releaseNoteOn(float milliseconds);
	AudioStream* getStream();
private:
	AudioEffectEnvelope envelope;

};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYENVELOPEEFFECT_H_ */
