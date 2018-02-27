/*
 * AnnArborPercussionSynthesizer.test.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */


#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <AnnArborPercussionSynthesizer.h>
#include "MockAnnArborPercussionControlsFactory.h"
#include "MockPlatformProvider.h"
#include "MockKnob.h"

using AnnArborPercussion::AnnArborPercussionSynthesizer;

TEST(AnnArborPercussionSynthesizerTest, should_get_synth_parameters_from_knobs) {

	MockPlatformProvider mockProvider;
	MockAnnArborPercussionControlsFactory mockControlsFactory;

	MockKnob mockLengthKnob;
	MockKnob mockMotionKnob;
	MockKnob mockFrequencyKnob;
	MockKnob mockModKnob;
	MockKnob mockTeethKnob;

	EXPECT_CALL(mockControlsFactory,createLengthKnob(&mockProvider)).Times(1).WillOnce(testing::Return(&mockLengthKnob));
	EXPECT_CALL(mockControlsFactory,createFrequencyKnob(&mockProvider)).Times(1).WillOnce(testing::Return(&mockFrequencyKnob));
	EXPECT_CALL(mockControlsFactory,createMotionKnob(&mockProvider)).Times(1).WillOnce(testing::Return(&mockMotionKnob));
	EXPECT_CALL(mockControlsFactory,createModKnob(&mockProvider)).Times(1).WillOnce(testing::Return(&mockModKnob));
	EXPECT_CALL(mockControlsFactory,createTeethKnob(&mockProvider)).Times(1).WillOnce(testing::Return(&mockTeethKnob));

	AnnArborPercussionSynthesizer* a2Synth =
			new AnnArborPercussionSynthesizer(&mockProvider,&mockControlsFactory);

	int expectedDrumWidth = 5;
	EXPECT_CALL(mockLengthKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumWidth));

	int expectedDrumMotion = 7;
	EXPECT_CALL(mockMotionKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumMotion));

	int expectedDrumFrequency = 203;
	EXPECT_CALL(mockFrequencyKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumFrequency));

	int expectedDrumMod = 43;
	EXPECT_CALL(mockModKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumMod));

	int expectedDrumTeeth = 23;
	EXPECT_CALL(mockTeethKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumTeeth));

	EXPECT_EQ(a2Synth->getDrumLength(), expectedDrumWidth);
	EXPECT_EQ(a2Synth->getDrumMotion(), expectedDrumMotion);
	EXPECT_EQ(a2Synth->getDrumFrequency(), expectedDrumFrequency);
	EXPECT_EQ(a2Synth->getDrumMod(), expectedDrumMod);
	EXPECT_EQ(a2Synth->getDrumTeeth(), expectedDrumTeeth);


}



