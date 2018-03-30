/*
 * TeensyEnvelopeEffect.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#include <TeensyEnvelopeEffect.h>

namespace AnnArborPercussion {

TeensyEnvelopeEffect::TeensyEnvelopeEffect() {
//	this->envelope = new AudioEffectEnvelope();
}

TeensyEnvelopeEffect::~TeensyEnvelopeEffect() {
	// TODO Auto-generated destructor stub
}

void TeensyEnvelopeEffect::noteOn(){
	this->envelope.noteOn();
};
void TeensyEnvelopeEffect::noteOff(){
	this->envelope.noteOff();
};
void TeensyEnvelopeEffect::delay(float milliseconds){
	this->envelope.delay(milliseconds);
};
void TeensyEnvelopeEffect::attack(float milliseconds){
	this->envelope.attack(milliseconds);
};
void TeensyEnvelopeEffect::hold(float milliseconds){
	this->envelope.hold(milliseconds);
};
void TeensyEnvelopeEffect::decay(float milliseconds){
	this->envelope.decay(milliseconds);
};
void TeensyEnvelopeEffect::sustain(float level){
	this->envelope.sustain(level);
};
void TeensyEnvelopeEffect::release(float milliseconds){
	this->envelope.release(milliseconds);
};
void TeensyEnvelopeEffect::releaseNoteOn(float milliseconds){
	this->releaseNoteOn(milliseconds);
};

AudioStream* TeensyEnvelopeEffect::getStream(){
	return &this->envelope;
}

} /* namespace AnnArborPercussion */
