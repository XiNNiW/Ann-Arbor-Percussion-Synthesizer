/*
 * AnnArborPercussionSynthesizer.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#include <AnnArborPercussionSynthesizer.h>

namespace AnnArborPercussion{

	AnnArborPercussionSynthesizer::AnnArborPercussionSynthesizer(PlatformProviderInterface* platformProvider, AnnArborPercussionControlsFactoryInterface* controlsFactory) {

		this->drumLengthKnob = controlsFactory->createLengthKnob(platformProvider);
		this->drumMotionKnob = controlsFactory->createMotionKnob(platformProvider);
		this->drumFrequencyKnob = controlsFactory->createFrequencyKnob(platformProvider);
		this->drumModKnob = controlsFactory->createModKnob(platformProvider);
		this->drumTeethKnob = controlsFactory->createTeethKnob(platformProvider);

	}

	AnnArborPercussionSynthesizer::~AnnArborPercussionSynthesizer() {}


	int AnnArborPercussionSynthesizer::getDrumLength(){
		return this->drumLengthKnob->getValue();
	}

	int AnnArborPercussionSynthesizer::getDrumMotion(){
		return this->drumMotionKnob->getValue();
	}

	int AnnArborPercussionSynthesizer::getDrumFrequency(){
		return this->drumFrequencyKnob->getValue();
	}

	int AnnArborPercussionSynthesizer::getDrumMod(){
		return this->drumModKnob->getValue();
	}

	int AnnArborPercussionSynthesizer::getDrumTeeth(){
		return this->drumTeethKnob->getValue();
	}

}
