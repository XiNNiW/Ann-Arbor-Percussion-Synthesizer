/*
 * TeensyWaveformOscillator.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#include <TeensyWaveformOscillator.h>

namespace AnnArborPercussion {

TeensyWaveformOscillator::TeensyWaveformOscillator() {
	this->waveform = new AudioSynthWaveform();
}

TeensyWaveformOscillator::~TeensyWaveformOscillator() {
	// TODO Auto-generated destructor stub
}

void TeensyWaveformOscillator::frequency(float t_freq){
	this->waveform->frequency(t_freq);
};
void TeensyWaveformOscillator::phase(float angle){
	this->waveform->phase(angle);
};
void TeensyWaveformOscillator::amplitude(float level){
	this->waveform->amplitude(level);
};
void TeensyWaveformOscillator::offset(float n){
	this->waveform->offset(n);
};
void TeensyWaveformOscillator::pulseWidth(float width){
	this->waveform->pulseWidth(width);
};
void TeensyWaveformOscillator::begin(short t_type){
	this->waveform->begin(t_type);
};
void TeensyWaveformOscillator::begin(float t_amp, float t_freq, short t_type){
	this->waveform->begin( t_amp,  t_freq,  t_type);
};
void TeensyWaveformOscillator::arbitraryWaveform(const short int* data, float maxFreq){
	this->waveform->arbitraryWaveform(data, maxFreq);
};

} /* namespace AnnArborPercussion */
