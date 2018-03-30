/*
 * TeensyAudioMixer4.cpp
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#include <TeensyAudioMixer4.h>
#include <Audio.h>

namespace AnnArborPercussion {

TeensyAudioMixer4::~TeensyAudioMixer4() {
	// TODO Auto-generated destructor stub
}

TeensyAudioMixer4::TeensyAudioMixer4() {
//	this->mixer=new AudioMixer4();
}

void TeensyAudioMixer4::gain(unsigned int channel, float gain){
	this->mixer.gain(channel,gain);
};

AudioStream* TeensyAudioMixer4::getStream(){
	return &this->mixer;
}


} /* namespace AnnArborPercussion */
