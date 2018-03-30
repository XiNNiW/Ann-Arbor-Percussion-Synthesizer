/*
 * TeensyBitcrusherEffect.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#include <TeensyBitcrusherEffect.h>

namespace AnnArborPercussion {

TeensyBitcrusherEffect::TeensyBitcrusherEffect() {
//	this->bitcrusher=new AudioEffectBitcrusher();
}

TeensyBitcrusherEffect::~TeensyBitcrusherEffect() {
	// TODO Auto-generated destructor stub
}

void TeensyBitcrusherEffect::bits(unsigned int b){
	this->bitcrusher.bits(b);
}; //uint8_t
void TeensyBitcrusherEffect::sampleRate(float hz){
	this->bitcrusher.sampleRate(hz);
};

AudioStream* TeensyBitcrusherEffect::getStream(){
	return &this->bitcrusher;
}

} /* namespace AnnArborPercussion */
