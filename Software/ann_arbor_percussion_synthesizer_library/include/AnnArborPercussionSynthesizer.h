/*
 * AnnArborPercussionSynthesizer.h
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_ANNARBORPERCUSSIONSYNTHESIZER_H_
#define INCLUDE_ANNARBORPERCUSSIONSYNTHESIZER_H_
#include <PlatformProviderInterface.h>
#include <KnobInterface.h>


class AnnArborPercussionSynthesizer {
public:
	AnnArborPercussionSynthesizer(PlatformProviderInterface* platformProvider);
	virtual ~AnnArborPercussionSynthesizer();
	int getDrumWidth();
	int getDrumMotion();
	int getDrumFrequency();

private:
	KnobInterface* drumWidthKnob;
	KnobInterface* drumMotionKnob;
	KnobInterface* drumFrequencyKnob;

};

#endif /* INCLUDE_ANNARBORPERCUSSIONSYNTHESIZER_H_ */
