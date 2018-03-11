/*
 * AnnArborPercussionControlsFactoryInterface.h
 *
 *  Created on: Feb 25, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_ANNARBORPERCUSSIONCONTROLSFACTORYINTERFACE_H_
#define INCLUDE_ANNARBORPERCUSSIONCONTROLSFACTORYINTERFACE_H_

#include <PlatformProviderInterface.h>

namespace AnnArborPercussion{

	class AnnArborPercussionControlsFactoryInterface {
	public:
		virtual ~AnnArborPercussionControlsFactoryInterface(){};
		virtual KnobInterface* createLengthKnob(PlatformProviderInterface* platformProvider)=0;
		virtual KnobInterface* createMotionKnob(PlatformProviderInterface* platformProvider)=0;
		virtual KnobInterface* createFrequencyKnob(PlatformProviderInterface* platformProvider)=0;
		virtual KnobInterface* createTeethKnob(PlatformProviderInterface* platformProvider)=0;
		virtual KnobInterface* createModKnob(PlatformProviderInterface* platformProvider)=0;
		//TriggerInterface* createDrumTrigger(platformProvider) //creates concrete CVTrigger
	};

}

#endif /* INCLUDE_ANNARBORPERCUSSIONCONTROLSFACTORYINTERFACE_H_ */
