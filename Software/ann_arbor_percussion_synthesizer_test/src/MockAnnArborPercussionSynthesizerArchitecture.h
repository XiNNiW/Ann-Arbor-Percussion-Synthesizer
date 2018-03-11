/*
 * MockAnnArborPercussionSynthesizerArchitecture.h
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#ifndef SRC_MOCKANNARBORPERCUSSIONSYNTHESIZERARCHITECTURE_H_
#define SRC_MOCKANNARBORPERCUSSIONSYNTHESIZERARCHITECTURE_H_

#include "gmock/gmock.h"
#include <AnnArborPercussionSynthesizerArchitectureInterface.h>

using AnnArborPercussion::AnnArborPercussionSynthesizerArchitectureInterface;

class MockAnnArborPercussionSynthesizerArchitecture : public AnnArborPercussionSynthesizerArchitectureInterface {
public:
	MOCK_METHOD0(getSineOscillator, AnnArborPercussion::SineOscillatorAdapterInterface*(void));
	MOCK_METHOD0(getSineFrequencyModulationOscillator, AnnArborPercussion::FrequencyModulatedSineOscillatorAdapterInterface*(void));
	MOCK_METHOD0(getWaveformOscillator, AnnArborPercussion::WaveformOscillatorAdapterInterface*(void));
	MOCK_METHOD0(getPulseWidthModulationOscillator, AnnArborPercussion::PulseWidthModulationOscillatorAdapterInterface*(void));
	MOCK_METHOD0(getWhiteNoiseGenerator, AnnArborPercussion::WhiteNoiseGeneratorAdapterInterface*(void));
	MOCK_METHOD0(getSimpleDrumSynthesizer, AnnArborPercussion::SimpleDrumAdapterInterface*(void));
	MOCK_METHOD0(getNoiseEnvelope, AnnArborPercussion::EnvelopeEffectAdapterInterface*(void));
	MOCK_METHOD0(getToneEnvelope, AnnArborPercussion::EnvelopeEffectAdapterInterface*(void));
	MOCK_METHOD0(getBitcrusherEffect, AnnArborPercussion::BitcrusherEffectAdapterInterface*(void));
	MOCK_METHOD0(getFilter, AnnArborPercussion::StateVariableFilterAdapterInterface*(void));
	MOCK_METHOD0(getPrefilterMixer, AnnArborPercussion::Mixer4AdapterInterface*(void));
	MOCK_METHOD0(getFilterMixer, AnnArborPercussion::Mixer4AdapterInterface*(void));
	MOCK_METHOD0(getOscillatorMixer, AnnArborPercussion::Mixer4AdapterInterface*(void));
	MOCK_METHOD0(getOutput, AnnArborPercussion::AudioOutputI2SAdapterInterface*(void));

};


#endif /* SRC_MOCKANNARBORPERCUSSIONSYNTHESIZERARCHITECTURE_H_ */
