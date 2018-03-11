/*
 * TeensySimpleDrum.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#include <TeensySimpleDrum.h>

namespace AnnArborPercussion {

TeensySimpleDrum::TeensySimpleDrum() {
	this->drum = new AudioSynthSimpleDrum();
}

TeensySimpleDrum::~TeensySimpleDrum() {
	// TODO Auto-generated destructor stub
}

void TeensySimpleDrum::noteOn(){
	this->drum->noteOn();
};
void TeensySimpleDrum::frequency(float freq){
	this->drum->frequency(freq);
};
void TeensySimpleDrum::length(int milliseconds){
	this->drum->length(milliseconds);
}; //int32_t
void TeensySimpleDrum::secondMix(float level){
	this->drum->secondMix(level);
};
void TeensySimpleDrum::pitchMod(float depth){
	this->drum->pitchMod(depth);
};

} /* namespace AnnArborPercussion */
