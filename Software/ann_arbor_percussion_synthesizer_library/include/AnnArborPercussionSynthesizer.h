/*
 * AnnArborPercussionSynthesizer.h
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_ANNARBORPERCUSSIONSYNTHESIZER_H_
#define INCLUDE_ANNARBORPERCUSSIONSYNTHESIZER_H_
#include <PlatformProviderInterface.h>

class AnnArborPercussionSynthesizer {
public:
	AnnArborPercussionSynthesizer(PlatformProviderInterface* platformProvider);
	virtual ~AnnArborPercussionSynthesizer();
	void initialize();
};

#endif /* INCLUDE_ANNARBORPERCUSSIONSYNTHESIZER_H_ */
