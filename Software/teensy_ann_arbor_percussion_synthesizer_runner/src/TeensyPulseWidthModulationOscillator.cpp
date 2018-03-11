/*
 * TeensyPulseWidthModulationOscillator.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#include <TeensyPulseWidthModulationOscillator.h>

namespace AnnArborPercussion {

TeensyPulseWidthModulationOscillator::TeensyPulseWidthModulationOscillator() {
	this->oscillator=new AudioSynthWaveformPWM();

}

TeensyPulseWidthModulationOscillator::~TeensyPulseWidthModulationOscillator() {
	// TODO Auto-generated destructor stub
}

void TeensyPulseWidthModulationOscillator::frequency(float freq){
	this->oscillator->frequency(freq);
};
void TeensyPulseWidthModulationOscillator::amplitude(float level){
	this->oscillator->amplitude(level);
};



} /* namespace AnnArborPercussion */
