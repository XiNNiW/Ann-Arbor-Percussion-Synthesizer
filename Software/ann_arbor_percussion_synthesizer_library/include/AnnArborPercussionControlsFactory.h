/*
 * AnnArborPercussionControlsFactory.h
 *
 *  Created on: Feb 25, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_ANNARBORPERCUSSIONCONTROLSFACTORY_H_
#define INCLUDE_ANNARBORPERCUSSIONCONTROLSFACTORY_H_

#include <KnobInterface.h>
#include <PlatformProviderInterface.h>
#include <AnnArborPercussionControlsFactoryInterface.h>

namespace AnnArborPercussion{

	class AnnArborPercussionControlsFactory : public AnnArborPercussionControlsFactoryInterface{
	public:
		AnnArborPercussionControlsFactory();
		virtual ~AnnArborPercussionControlsFactory();
		KnobInterface* createLengthKnob(PlatformProviderInterface* platformProvider);
		KnobInterface* createMotionKnob(PlatformProviderInterface* platformProvider);
		KnobInterface* createFrequencyKnob(PlatformProviderInterface* platformProvider);
		KnobInterface* createTeethKnob(PlatformProviderInterface* platformProvider);
		KnobInterface* createModKnob(PlatformProviderInterface* platformProvider);
		//createDrumTrigger (platformProvider)
	};

}

#endif /* INCLUDE_ANNARBORPERCUSSIONCONTROLSFACTORY_H_ */
