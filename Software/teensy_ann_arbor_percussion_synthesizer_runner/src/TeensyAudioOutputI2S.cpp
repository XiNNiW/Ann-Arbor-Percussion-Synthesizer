/*
 * TeensyAudioOutputI2S.cpp
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#include <TeensyAudioOutputI2S.h>

namespace AnnArborPercussion {

TeensyAudioOutputI2S::~TeensyAudioOutputI2S() {
}

TeensyAudioOutputI2S::TeensyAudioOutputI2S() {
//	this->output=new AudioOutputI2S();
}

void TeensyAudioOutputI2S::begin(){
	this->output.begin();
}

AudioStream* TeensyAudioOutputI2S::getStream(){
	return &this->output;
}

} /* namespace AnnArborPercussion */
