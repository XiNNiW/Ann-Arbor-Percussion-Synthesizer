/*
 * AnnArborPercussionControlsFactory.test.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: xinniw
 */

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <AnnArborPercussionControlsFactory.h>
#include "MockPlatformProvider.h"
#include "MockKnob.h"

TEST(AnnArborPercussionControlsFactoryTest, create_length_knob_passes_the_right_parameters) {
	MockPlatformProvider mockProvider;

	MockKnob mockLengthKnob;

	int pinForDrumLengthKnob = 14;
	int minValueForDrumLengthKnob = 0;
	int maxValueForDrumLengthKnob = 2000;

	EXPECT_CALL(mockProvider,
			createKnob(
					pinForDrumLengthKnob,
					minValueForDrumLengthKnob,
					maxValueForDrumLengthKnob
			)
	).Times(1).WillOnce(testing::Return(&mockLengthKnob));

	AnnArborPercussionControlsFactory* controlsFactory = new AnnArborPercussionControlsFactory();
	KnobInterface* actualKnob = controlsFactory->createLengthKnob(&mockProvider);

	int expectedDrumLength = 5;
	EXPECT_CALL(mockLengthKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumLength));
	EXPECT_EQ(actualKnob->getValue(), expectedDrumLength);

}

TEST(AnnArborPercussionControlsFactoryTest, create_motion_knob_passes_the_right_parameters) {
	MockPlatformProvider mockProvider;

	MockKnob mockMotionKnob;

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

	AnnArborPercussionControlsFactory* controlsFactory = new AnnArborPercussionControlsFactory();
	KnobInterface* actualKnob = controlsFactory->createMotionKnob(&mockProvider);

	int expectedDrumMotion = 54;
	EXPECT_CALL(mockMotionKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumMotion));
	EXPECT_EQ(actualKnob->getValue(), expectedDrumMotion);

}

TEST(AnnArborPercussionControlsFactoryTest, create_frequency_knob_passes_the_right_parameters) {
	MockPlatformProvider mockProvider;

	MockKnob mockFrequencyKnob;

	int pinForDrumFrequencyKnob = 15;
	int minValueForDrumFrequencyKnob = 20;
	int maxValueForDrumFrequencyKnob = 2500;

	EXPECT_CALL(mockProvider,
			createKnob(
					pinForDrumFrequencyKnob,
					minValueForDrumFrequencyKnob,
					maxValueForDrumFrequencyKnob
			)
	).Times(1).WillOnce(testing::Return(&mockFrequencyKnob));

	AnnArborPercussionControlsFactory* controlsFactory = new AnnArborPercussionControlsFactory();
	KnobInterface* actualKnob = controlsFactory->createFrequencyKnob(&mockProvider);

	int expectedDrumFrequency = 1400;
	EXPECT_CALL(mockFrequencyKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumFrequency));
	EXPECT_EQ(actualKnob->getValue(), expectedDrumFrequency);

}

TEST(AnnArborPercussionControlsFactoryTest, create_teeth_knob_passes_the_right_parameters) {
	MockPlatformProvider mockProvider;

	MockKnob mockTeethKnob;

	int pinForDrumTeethKnob = 20;
	int minValueForDrumTeethKnob = 1;
	int maxValueForDrumTeethKnob = 2000;

	EXPECT_CALL(mockProvider,
			createKnob(
					pinForDrumTeethKnob,
					minValueForDrumTeethKnob,
					maxValueForDrumTeethKnob
			)
	).Times(1).WillOnce(testing::Return(&mockTeethKnob));

	AnnArborPercussionControlsFactory* controlsFactory = new AnnArborPercussionControlsFactory();
	KnobInterface* actualKnob = controlsFactory->createTeethKnob(&mockProvider);

	int expectedDrumTeeth = 540;
	EXPECT_CALL(mockTeethKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumTeeth));
	EXPECT_EQ(actualKnob->getValue(), expectedDrumTeeth);

}

TEST(AnnArborPercussionControlsFactoryTest, create_mod_knob_passes_the_right_parameters) {
	MockPlatformProvider mockProvider;

	MockKnob mockModKnob;

	int pinForDrumModKnob = 16;
	int minValueForDrumModKnob = 1;
	int maxValueForDrumModKnob = 2000;

	EXPECT_CALL(mockProvider,
			createKnob(
					pinForDrumModKnob,
					minValueForDrumModKnob,
					maxValueForDrumModKnob
			)
	).Times(1).WillOnce(testing::Return(&mockModKnob));

	AnnArborPercussionControlsFactory* controlsFactory = new AnnArborPercussionControlsFactory();
	KnobInterface* actualKnob = controlsFactory->createModKnob(&mockProvider);

	int expectedDrumTeeth = 240;
	EXPECT_CALL(mockModKnob, getValue()).Times(1).WillOnce(testing::Return(expectedDrumTeeth));
	EXPECT_EQ(actualKnob->getValue(), expectedDrumTeeth);

}



