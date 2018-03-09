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
using AnnArborPercussion::Mixer4AdapterInterface;
using AnnArborPercussion::WhiteNoiseGeneratorAdapterInterface;
using AnnArborPercussion::SimpleDrumAdapterInterface;
using AnnArborPercussion::WaveformOscillatorAdapterInterface;
using AnnArborPercussion::SineOscillatorAdapterInterface;
using AnnArborPercussion::FrequencyModulatedSineOscillatorAdapterInterface;
using AnnArborPercussion::PulseWidthModulationOscillatorAdapterInterface;
using AnnArborPercussion::StateVariableFilterAdapterInterface;
using AnnArborPercussion::EnvelopeEffectAdapterInterface;
using AnnArborPercussion::BitcrusherEffectAdapterInterface;

class MockAudioLibraryProvider : public AudioLibraryProviderInterface {
public:

	MOCK_METHOD2(createAudioConnection,AudioConnectionAdapterInterface*(AudioStreamAdapterInterface* source, AudioStreamAdapterInterface* destination));
	MOCK_METHOD4(createAudioConnection,AudioConnectionAdapterInterface*(AudioStreamAdapterInterface* source, unsigned char sourceOutput, AudioStreamAdapterInterface* destination, unsigned char destinationInput));
	MOCK_METHOD0(create4ChannelMixer,Mixer4AdapterInterface*(void));
	MOCK_METHOD0(createWhiteNoiseSynth,WhiteNoiseGeneratorAdapterInterface*(void));
	MOCK_METHOD0(createSimpleDrum,SimpleDrumAdapterInterface*(void));
	MOCK_METHOD0(createWaveformSynth,WaveformOscillatorAdapterInterface*(void));
	MOCK_METHOD0(createSineWaveformSynth,SineOscillatorAdapterInterface*(void));
	MOCK_METHOD0(createModulatedSineWaveformSynth,FrequencyModulatedSineOscillatorAdapterInterface*(void));
	MOCK_METHOD0(createPWMWaveformSynth,PulseWidthModulationOscillatorAdapterInterface*(void));
	MOCK_METHOD0(createStateVariableFilter,StateVariableFilterAdapterInterface*(void));
	MOCK_METHOD0(createEnvelopeEffect,EnvelopeEffectAdapterInterface*(void));
	MOCK_METHOD0(createBitcrusherEffect,BitcrusherEffectAdapterInterface*(void));
	MOCK_METHOD0(createOutput,AudioOutputI2SAdapterInterface*(void));

};

#endif /* SRC_MOCKAUDIOLIBRARYPROVIDER_H_ */




