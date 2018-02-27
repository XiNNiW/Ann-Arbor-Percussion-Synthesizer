/*
 * MockAnnArborPercussionControlsFactory.h
 *
 *  Created on: Feb 25, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKANNARBORPERCUSSIONCONTROLSFACTORY_H_
#define SRC_MOCKANNARBORPERCUSSIONCONTROLSFACTORY_H_

#include <AnnArborPercussionControlsFactory.h>
#include <KnobInterface.h>
#include <PlatformProviderInterface.h>
#include "gmock/gmock.h"

class MockAnnArborPercussionControlsFactory : public AnnArborPercussionControlsFactoryInterface {
public:
	MOCK_METHOD1(createLengthKnob,KnobInterface*(PlatformProviderInterface* platformProvider));
	MOCK_METHOD1(createMotionKnob,KnobInterface*(PlatformProviderInterface* platformProvider));
	MOCK_METHOD1(createFrequencyKnob,KnobInterface*(PlatformProviderInterface* platformProvider));
	MOCK_METHOD1(createTeethKnob,KnobInterface*(PlatformProviderInterface* platformProvider));
	MOCK_METHOD1(createModKnob,KnobInterface*(PlatformProviderInterface* platformProvider));
};


#endif /* SRC_MOCKANNARBORPERCUSSIONCONTROLSFACTORY_H_ */
