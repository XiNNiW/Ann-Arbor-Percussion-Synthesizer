/*
 * TeensyPulseWidthModulationOscillator.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#include <TeensyPulseWidthModulationOscillator.h>

namespace AnnArborPercussion {

TeensyPulseWidthModulationOscillator::TeensyPulseWidthModulationOscillator() {
//	this->oscillator= new AudioSynthWaveformPWM();
}

TeensyPulseWidthModulationOscillator::~TeensyPulseWidthModulationOscillator() {
	// TODO Auto-generated destructor stub
	//delete this->oscillator;
}

void TeensyPulseWidthModulationOscillator::frequency(float freq){
	oscillator.frequency(freq);
};
void TeensyPulseWidthModulationOscillator::amplitude(float level){
	oscillator.amplitude(level);
};

AudioStream* TeensyPulseWidthModulationOscillator::getStream(){
	return &oscillator;
}



} /* namespace AnnArborPercussion */
