/*
 * AnnArborPercussionSynthesizer.test.cpp
 *
 *  Created on: Feb 24, 2018
 *      Author: xinniw
 */


#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <AnnArborPercussionSynthesizer.h>
#include "MockPlatformProvider.h"
#include "MockKnob.h"

TEST(AnnArborPercussionSynthesizerTest, should_get_synth_parameters_from_knobs) {
	MockPlatformProvider mockProvider;

	MockKnob mockWidthKnob;
	MockKnob mockMotionKnob;
	MockKnob mockFreqKnob;

	int pinForDrumWidthKnob = 14;
	int minValueForDrumWidthKnob = 0;
	int maxValueForDrumWidthKnob = 2000;

	EXPECT_CALL(mockProvider,
			createKnob(
					pinForDrumWidthKnob,
					minValueForDrumWidthKnob,
					maxValueForDrumWidthKnob
			)
	).Times(1).WillOnce(testing::Return(&mockWidthKnob));

	int pinForDrumMotionKnob = 21;
	int minValueForDrumMotionKnob = 1;
	int maxValueForDrumMotionKnob = 2000;

	EXPECT_CALL(mockProvider,
			createKnob(
					pinForDrumMotionKnob,
					minValueForDrumMotionKnob,
					maxValueForDrumMotionKnob
			)
	).Times(1).WillOnce(testing::Return(&mockMotionKnob));

	int pinForDrumFrequencyKnob = 15;
	int minValueForDrumFrequencyKnob = 20;
	int maxValueForDrumFrequencyKnob = 2500;

	EXPECT_CALL(mockProvider,
			createKnob(
					pinForDrumFrequencyKnob,
					minValueForDrumFrequencyKnob,
					maxValueForDrumFrequencyKnob
			)
	).Times(1).WillOnce(testing::Return(&mockFreqKnob));


	AnnArborPercussionSynthesizer* a2Synth =
			new AnnArborPercussionSynthesizer(&mockProvider);

	int expectedDrumWidth = 5;
	EXPECT_CALL(mockWidthKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumWidth));

	int expectedDrumMotion = 7;
	EXPECT_CALL(mockMotionKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumMotion));

	int expectedDrumFrequency = 203;
		EXPECT_CALL(mockFreqKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumFrequency));

	EXPECT_EQ(a2Synth->getDrumWidth(), expectedDrumWidth);
	EXPECT_EQ(a2Synth->getDrumMotion(), expectedDrumMotion);
	EXPECT_EQ(a2Synth->getDrumFrequency(), expectedDrumFrequency);


}



