/*
 * AnnArborPercussionControlsFactory.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: xinniw
 */

#include <AnnArborPercussionControlsFactory.h>

namespace AnnArborPercussion{

	AnnArborPercussionControlsFactory::AnnArborPercussionControlsFactory(){}
	AnnArborPercussionControlsFactory::~AnnArborPercussionControlsFactory(){}

	KnobInterface* AnnArborPercussionControlsFactory::createLengthKnob(PlatformProviderInterface* platformProvider){
		int pinForDrumLengthKnob = 14;
		int minValueForDrumLengthKnob = 0;
		int maxValueForDrumLengthKnob = 2000;
		return platformProvider->createKnob(pinForDrumLengthKnob,minValueForDrumLengthKnob,maxValueForDrumLengthKnob);
	}

	KnobInterface* AnnArborPercussionControlsFactory::createMotionKnob(PlatformProviderInterface* platformProvider){
		int pinForDrumMotionKnob = 21;
		int minValueForDrumMotionKnob = 1;
		int maxValueForDrumMotionKnob = 2000;
		return platformProvider->createKnob(pinForDrumMotionKnob,minValueForDrumMotionKnob,maxValueForDrumMotionKnob);
	}

	KnobInterface* AnnArborPercussionControlsFactory::createFrequencyKnob(PlatformProviderInterface* platformProvider){
		int pinForDrumFrequencyKnob = 15;
		int minValueForDrumFrequencyKnob = 20;
		int maxValueForDrumFrequencyKnob = 2500;
		return platformProvider->createKnob(pinForDrumFrequencyKnob,minValueForDrumFrequencyKnob,maxValueForDrumFrequencyKnob);
	}

	KnobInterface* AnnArborPercussionControlsFactory::createTeethKnob(PlatformProviderInterface* platformProvider){
		int pinForDrumTeethKnob = 20;
		int minValueForDrumTeethKnob = 1;
		int maxValueForDrumTeethKnob = 2000;
		return platformProvider->createKnob(pinForDrumTeethKnob,minValueForDrumTeethKnob,maxValueForDrumTeethKnob);
	}

	KnobInterface* AnnArborPercussionControlsFactory::createModKnob(PlatformProviderInterface* platformProvider){
		int pinForDrumModKnob = 16;
		int minValueForDrumModKnob = 1;
		int maxValueForDrumModKnob = 2000;
		return platformProvider->createKnob(pinForDrumModKnob,minValueForDrumModKnob,maxValueForDrumModKnob);
	}

}
