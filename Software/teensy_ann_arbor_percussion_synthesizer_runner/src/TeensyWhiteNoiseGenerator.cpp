/*
 * TeensyWhiteNoiseGenerator.cpp
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#include <TeensyWhiteNoiseGenerator.h>

namespace AnnArborPercussion {

TeensyWhiteNoiseGenerator::TeensyWhiteNoiseGenerator() {
//	this->whiteNoiseGenerator=new AudioSynthNoiseWhite();
}

TeensyWhiteNoiseGenerator::~TeensyWhiteNoiseGenerator() {
	// TODO Auto-generated destructor stub
}

void TeensyWhiteNoiseGenerator::amplitude(float level){
	this->whiteNoiseGenerator.amplitude(level);
};

AudioStream* TeensyWhiteNoiseGenerator::getStream(){
	return &this->whiteNoiseGenerator;
}

} /* namespace AnnArborPercussion */
