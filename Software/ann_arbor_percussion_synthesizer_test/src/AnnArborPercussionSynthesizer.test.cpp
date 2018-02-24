/*
 * AnnArborPercussionSynthesizer.test.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */


# include "gtest/gtest.h"
#include "gmock/gmock.h"
# include <AnnArborPercussionSynthesizer.h>
#include "MockPlatformProvider.h"
#include "MockKnob.h"


TEST(AnnArborPercussionSynthesizerTest, should_create_knob_on_setup) {
	MockPlatformProvider mockProvider;
	MockKnob mockKnob;


	EXPECT_CALL(mockProvider, createKnob(14,0,2000)).Times(1).WillOnce(testing::Return(&mockKnob));

	AnnArborPercussionSynthesizer* a2Synth =
			new AnnArborPercussionSynthesizer(&mockProvider);

	a2Synth->initialize();
    EXPECT_EQ(1, 0);
}



