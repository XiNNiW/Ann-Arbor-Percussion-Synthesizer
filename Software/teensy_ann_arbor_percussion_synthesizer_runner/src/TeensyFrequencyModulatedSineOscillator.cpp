/*
 * TeensyFrequencyModulatedSineOscillator.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#include <TeensyFrequencyModulatedSineOscillator.h>

namespace AnnArborPercussion {

TeensyFrequencyModulatedSineOscillator::TeensyFrequencyModulatedSineOscillator() {
	this->oscillator=new AudioSynthWaveformSineModulated();
}

TeensyFrequencyModulatedSineOscillator::~TeensyFrequencyModulatedSineOscillator() {
	// TODO Auto-generated destructor stub
}

void TeensyFrequencyModulatedSineOscillator::frequency(float freq){
	this->oscillator->frequency(freq);
};
void TeensyFrequencyModulatedSineOscillator::phase(float angle){
	this->oscillator->phase(angle);
};
void TeensyFrequencyModulatedSineOscillator::amplitude(float level){
	this->oscillator->amplitude(level);
};

} /* namespace AnnArborPercussion */
