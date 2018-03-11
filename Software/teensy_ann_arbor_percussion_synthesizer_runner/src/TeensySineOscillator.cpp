/*
 * TeensySineOscillator.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#include <TeensySineOscillator.h>

namespace AnnArborPercussion {

TeensySineOscillator::TeensySineOscillator() {
	this->oscillator=new AudioSynthWaveformSine();
}

TeensySineOscillator::~TeensySineOscillator() {
	// TODO Auto-generated destructor stub
}

void TeensySineOscillator::frequency(float freq){
	this->oscillator->frequency(freq);
};
void TeensySineOscillator::phase(float angle){
	this->oscillator->phase(angle);
};
void TeensySineOscillator::amplitude(float level){
	this->oscillator->amplitude(level);
};

} /* namespace AnnArborPercussion */
