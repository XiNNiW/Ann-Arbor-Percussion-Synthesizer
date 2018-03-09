/*
 * MockAudioLibraryProvider.h
 *
 *  Created on: Mar 4, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKAUDIOLIBRARYPROVIDER_H_
#define SRC_MOCKAUDIOLIBRARYPROVIDER_H_

#include <AudioLibraryProviderInterface.h>
#include "gmock/gmock.h"

using AnnArborPercussion::AudioLibraryProviderInterface;
using AnnArborPercussion::AudioOutputI2SAdapterInterface;
using AnnArborPercussion::AudioConnectionAdapterInterface;
using AnnArborPercussion::AudioStreamAdapterInterface;
using AnnArborPercussion::AudioMixer4AdapterInterface;
using AnnArborPercussion::AudioSynthNoiseWhiteAdapterInterface;
using AnnArborPercussion::AudioSynthSimpleDrumAdapterInterface;
using AnnArborPercussion::AudioSynthWaveformAdapterInterface;
using AnnArborPercussion::AudioSynthWaveformSineAdapterInterface;
using AnnArborPercussion::AudioSynthWaveformSineModulatedAdapterInterface;
using AnnArborPercussion::AudioSynthWaveformPWMAdapterInterface;
using AnnArborPercussion::AudioFilterStateVariableAdapterInterface;
using AnnArborPercussion::AudioEffectEnvelopeAdapterInterface;
using AnnArborPercussion::AudioEffectBitcrusherAdapterInterface;

class MockAudioLibraryProvider : public AudioLibraryProviderInterface {
public:

	MOCK_METHOD2(createAudioConnection,AudioConnectionAdapterInterface*(AudioStreamAdapterInterface* source, AudioStreamAdapterInterface* destination));
	MOCK_METHOD4(createAudioConnection,AudioConnectionAdapterInterface*(AudioStreamAdapterInterface* source, unsigned char sourceOutput, AudioStreamAdapterInterface* destination, unsigned char destinationInput));
	MOCK_METHOD0(create4ChannelMixer,AudioMixer4AdapterInterface*(void));
	MOCK_METHOD0(createWhiteNoiseSynth,AudioSynthNoiseWhiteAdapterInterface*(void));
	MOCK_METHOD0(createSimpleDrum,AudioSynthSimpleDrumAdapterInterface*(void));
	MOCK_METHOD0(createWaveformSynth,AudioSynthWaveformAdapterInterface*(void));
	MOCK_METHOD0(createSineWaveformSynth,AudioSynthWaveformSineAdapterInterface*(void));
	MOCK_METHOD0(createModulatedSineWaveformSynth,AudioSynthWaveformSineModulatedAdapterInterface*(void));
	MOCK_METHOD0(createPWMWaveformSynth,AudioSynthWaveformPWMAdapterInterface*(void));
	MOCK_METHOD0(createStateVariableFilter,AudioFilterStateVariableAdapterInterface*(void));
	MOCK_METHOD0(createEnvelopeEffect,AudioEffectEnvelopeAdapterInterface*(void));
	MOCK_METHOD0(createBitcrusherEffect,AudioEffectBitcrusherAdapterInterface*(void));
	MOCK_METHOD0(createOutput,AudioOutputI2SAdapterInterface*(void));

};

#endif /* SRC_MOCKAUDIOLIBRARYPROVIDER_H_ */




