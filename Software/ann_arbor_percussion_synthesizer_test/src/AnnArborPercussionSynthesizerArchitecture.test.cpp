/*
 * AnnArborPercussionSynthesizerArchitecture.test.cpp
 *
 *  Created on: Mar 3, 2018
 *      Author: xinniw
 */

#include "gtest/gtest.h"
#include "gmock/gmock.h"
#include <AnnArborPercussionSynthesizerArchitecture.h>
#include "MockAudioLibraryProvider.h"
#include "MockSineWaveformSynth.h"
#include "MockModulatedSineWaveformSynth.h"
#include "MockWaveformSynth.h"
#include "MockWhiteNoiseSynth.h"
#include "MockWaveformPWMSynth.h"
#include "MockSimpleDrum.h"
#include "Mock4ChannelMixer.h"
#include "MockEnvelopeEffect.h"
#include "MockBitcrusherEffect.h"
#include "MockStateVariableFilter.h"
#include "MockI2SOutput.h"
#include "MockAudioConnection.h"


using AnnArborPercussion::AnnArborPercussionSynthesizerArchitecture;

TEST(AnnArborPercussionSynthesizerArchitectureTest,creates_and_connects_components_on_construction){

	MockAudioLibraryProvider mockLibraryProvider;
	MockSineWaveformSynth mockSineWaveformSynth;
	MockModulatedSineWaveformSynth mockModulatedSineWaveformSynth;
	MockWaveformSynth mockWaveformSynth;
	MockWhiteNoiseSynth mockWhiteNoiseSynth;
	MockWaveformPWMSynth mockWaveformPWMSynth;
	MockSimpleDrum mockSimpleDrum;
	Mock4ChannelMixer mock4ChannelMixer1;
	Mock4ChannelMixer mock4ChannelMixer2;
	Mock4ChannelMixer mock4ChannelMixer3;
	MockEnvelopeEffect mockEffectEnvelope1;
	MockEnvelopeEffect mockEffectEnvelope2;
	MockBitcrusherEffect mockBitcrusherEffect;
	MockStateVariableFilter mockStateVariableFilter;

	MockI2SOutput mockOutput;

	MockAudioConnection mockConnection1;
	MockAudioConnection mockConnection2;
	MockAudioConnection mockConnection3;
	MockAudioConnection mockConnection4;
	MockAudioConnection mockConnection5;
	MockAudioConnection mockConnection6;
	MockAudioConnection mockConnection7;
	MockAudioConnection mockConnection8;
	MockAudioConnection mockConnection9;
	MockAudioConnection mockConnection10;
	MockAudioConnection mockConnection11;
	MockAudioConnection mockConnection12;
	MockAudioConnection mockConnection13;
	MockAudioConnection mockConnection14;
	MockAudioConnection mockConnection15;
	MockAudioConnection mockConnection16;
	MockAudioConnection mockConnection17;

	EXPECT_CALL(mockLibraryProvider,createSineWaveformSynth())
			.Times(1)
			.WillOnce(testing::Return(&mockSineWaveformSynth));
	EXPECT_CALL(mockLibraryProvider,createModulatedSineWaveformSynth())
			.Times(1)
			.WillOnce(testing::Return(&mockModulatedSineWaveformSynth));
	EXPECT_CALL(mockLibraryProvider,createWaveformSynth())
			.Times(1)
			.WillOnce(testing::Return(&mockWaveformSynth));
	EXPECT_CALL(mockLibraryProvider,createWhiteNoiseSynth())
			.Times(1)
			.WillOnce(testing::Return(&mockWhiteNoiseSynth));
	EXPECT_CALL(mockLibraryProvider,createPWMWaveformSynth())
			.Times(1)
			.WillOnce(testing::Return(&mockWaveformPWMSynth));
	EXPECT_CALL(mockLibraryProvider,createSimpleDrum())
			.Times(1)
			.WillOnce(testing::Return(&mockSimpleDrum));
	EXPECT_CALL(mockLibraryProvider,create4ChannelMixer())
			.Times(3)
			.WillOnce(testing::Return(&mock4ChannelMixer1))
			.WillOnce(testing::Return(&mock4ChannelMixer2))
			.WillOnce(testing::Return(&mock4ChannelMixer3));
	EXPECT_CALL(mockLibraryProvider,createEnvelopeEffect())
			.Times(2)
			.WillOnce(testing::Return(&mockEffectEnvelope1))
			.WillOnce(testing::Return(&mockEffectEnvelope2));
	EXPECT_CALL(mockLibraryProvider,createBitcrusherEffect())
			.Times(1)
			.WillOnce(testing::Return(&mockBitcrusherEffect));
	EXPECT_CALL(mockLibraryProvider,createStateVariableFilter())
			.Times(1)
			.WillOnce(testing::Return(&mockStateVariableFilter));
	EXPECT_CALL(mockLibraryProvider,createOutput())
			.Times(1)
			.WillOnce(testing::Return(&mockOutput));

	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockSineWaveformSynth,&mockWaveformPWMSynth))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection1));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockSineWaveformSynth,&mockModulatedSineWaveformSynth))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection2));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockSineWaveformSynth,0,&mock4ChannelMixer3,3))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection3));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockWaveformSynth,0,&mock4ChannelMixer3,1))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection4));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockWhiteNoiseSynth,&mockEffectEnvelope2))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection5));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockWaveformPWMSynth,0,&mock4ChannelMixer3,2))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection6));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockSimpleDrum,0,&mock4ChannelMixer3,0))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection7));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mock4ChannelMixer3,&mockEffectEnvelope1))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection8));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockEffectEnvelope2,0,&mock4ChannelMixer1,1))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection9));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockEffectEnvelope1,&mockBitcrusherEffect))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection10));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockBitcrusherEffect,0,&mock4ChannelMixer1,0))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection11));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mock4ChannelMixer1,0,&mockStateVariableFilter,0))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection12));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mock4ChannelMixer1,0,&mock4ChannelMixer2,2))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection13));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockStateVariableFilter,0,&mock4ChannelMixer2,0))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection14));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mockStateVariableFilter,2,&mock4ChannelMixer2,1))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection15));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mock4ChannelMixer2,0,&mockOutput,0))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection16));
	EXPECT_CALL(mockLibraryProvider,createAudioConnection(&mock4ChannelMixer2,0,&mockOutput,1))
			.Times(1)
			.WillOnce(testing::Return(&mockConnection17));

	AnnArborPercussionSynthesizerArchitecture* synthArchitecture = new AnnArborPercussionSynthesizerArchitecture(&mockLibraryProvider);

	EXPECT_EQ(&mockSineWaveformSynth,synthArchitecture->getSineOscillator());
	EXPECT_EQ(&mockModulatedSineWaveformSynth,synthArchitecture->getSineFrequencyModulationOscillator());
	EXPECT_EQ(&mockWaveformSynth,synthArchitecture->getWaveformOscillator());
	EXPECT_EQ(&mockWaveformPWMSynth,synthArchitecture->getPulseWidthModulationOscillator());
	EXPECT_EQ(&mockWhiteNoiseSynth,synthArchitecture->getWhiteNoiseGenerator());
	EXPECT_EQ(&mockSimpleDrum,synthArchitecture->getSimpleDrumSynthesizer());
	EXPECT_EQ(&mockEffectEnvelope2,synthArchitecture->getNoiseEnvelope());
	EXPECT_EQ(&mockEffectEnvelope1,synthArchitecture->getToneEnvelope());
	EXPECT_EQ(&mockBitcrusherEffect,synthArchitecture->getBitcrusherEffect());
	EXPECT_EQ(&mockStateVariableFilter,synthArchitecture->getFilter());
	EXPECT_EQ(&mock4ChannelMixer1,synthArchitecture->getPrefilterMixer());
	EXPECT_EQ(&mock4ChannelMixer2,synthArchitecture->getFilterMixer());
	EXPECT_EQ(&mock4ChannelMixer3,synthArchitecture->getOscillatorMixer());
	EXPECT_EQ(&mockOutput,synthArchitecture->getOutput());


};

