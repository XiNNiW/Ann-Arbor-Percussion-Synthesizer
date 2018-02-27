/*
 * AnnArborPercussionSynthesizer.h
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_ANNARBORPERCUSSIONSYNTHESIZER_H_
#define INCLUDE_ANNARBORPERCUSSIONSYNTHESIZER_H_
#include <PlatformProviderInterface.h>
#include <AnnArborPercussionControlsFactoryInterface.h>
#include <KnobInterface.h>


class AnnArborPercussionSynthesizer {
public:
	AnnArborPercussionSynthesizer(PlatformProviderInterface* platformProvider, AnnArborPercussionControlsFactoryInterface* controlsFactory);
	virtual ~AnnArborPercussionSynthesizer();
	int getDrumLength();
	int getDrumMotion();
	int getDrumFrequency();
	int getDrumMod();
	int getDrumTeeth();

private:
	KnobInterface* drumLengthKnob;
	KnobInterface* drumMotionKnob;
	KnobInterface* drumFrequencyKnob;
	KnobInterface* drumModKnob;
	KnobInterface* drumTeethKnob;

};

#endif /* INCLUDE_ANNARBORPERCUSSIONSYNTHESIZER_H_ */
