/*
 * TeensyStateVariableFilter.cpp
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#include <TeensyStateVariableFilter.h>

namespace AnnArborPercussion {

TeensyStateVariableFilter::TeensyStateVariableFilter() {
	this->filter=new AudioFilterStateVariable();
}

TeensyStateVariableFilter::~TeensyStateVariableFilter() {
	// TODO Auto-generated destructor stub
}

void TeensyStateVariableFilter::frequency(float freq){
	this->filter->frequency(freq);
};
void TeensyStateVariableFilter::resonance(float q){
	this->filter->resonance(q);
};
void TeensyStateVariableFilter::octaveControl(float octave){
	this->filter->octaveControl(octave);
};

} /* namespace AnnArborPercussion */
