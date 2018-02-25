/*
 * AnnArborPercussionSynthesizer.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#include <AnnArborPercussionSynthesizer.h>

AnnArborPercussionSynthesizer::AnnArborPercussionSynthesizer(PlatformProviderInterface* platformProvider) {

	int pinForDrumWidthKnob = 14;
	int minValueForDrumWidthKnob = 0;
	int maxValueForDrumWidthKnob = 2000;
	this->drumWidthKnob = platformProvider->createKnob(pinForDrumWidthKnob,minValueForDrumWidthKnob,maxValueForDrumWidthKnob);

	int pinForDrumMotionKnob = 21;
	int minValueForDrumMotionKnob = 1;
	int maxValueForDrumMotionKnob = 2000;
	this->drumMotionKnob = platformProvider->createKnob(pinForDrumMotionKnob,minValueForDrumMotionKnob,maxValueForDrumMotionKnob);

	int pinForDrumFrequencyKnob = 15;
	int minValueForDrumFrequencyKnob = 20;
	int maxValueForDrumFrequencyKnob = 2500;
	this->drumFrequencyKnob = platformProvider->createKnob(pinForDrumFrequencyKnob,minValueForDrumFrequencyKnob,maxValueForDrumFrequencyKnob);
}

AnnArborPercussionSynthesizer::~AnnArborPercussionSynthesizer() {}


int AnnArborPercussionSynthesizer::getDrumWidth(){
	return this->drumWidthKnob->getValue();
}

int AnnArborPercussionSynthesizer::getDrumMotion(){
	return this->drumMotionKnob->getValue();
}

int AnnArborPercussionSynthesizer::getDrumFrequency(){
	return this->drumFrequencyKnob->getValue();
}
