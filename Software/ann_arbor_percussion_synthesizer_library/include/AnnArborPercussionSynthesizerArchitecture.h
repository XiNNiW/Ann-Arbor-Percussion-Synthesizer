/*
 * AnnArborPercussionSynthesizerArchitecture.h
 *
 *  Created on: Mar 3, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_ANNARBORPERCUSSIONSYNTHESIZERARCHITECTURE_H_
#define INCLUDE_ANNARBORPERCUSSIONSYNTHESIZERARCHITECTURE_H_

#include <AudioLibraryProviderInterface.h>
#include <AnnArborPercussionSynthesizerArchitectureInterface.h>

namespace AnnArborPercussion {

class AnnArborPercussionSynthesizerArchitecture : public AnnArborPercussionSynthesizerArchitectureInterface {
public:
	virtual ~AnnArborPercussionSynthesizerArchitecture();
	AnnArborPercussionSynthesizerArchitecture(AudioLibraryProviderInterface* libraryProvider);
	virtual SineOscillatorAdapterInterface* getSineOscillator();
	virtual FrequencyModulatedSineOscillatorAdapterInterface* getSineFrequencyModulationOscillator();
	virtual WaveformOscillatorAdapterInterface* getWaveformOscillator();
	virtual PulseWidthModulationOscillatorAdapterInterface* getPulseWidthModulationOscillator();
	virtual WhiteNoiseGeneratorAdapterInterface* getWhiteNoiseGenerator();
	virtual SimpleDrumAdapterInterface* getSimpleDrumSynthesizer();
	virtual EnvelopeEffectAdapterInterface* getNoiseEnvelope();
	virtual EnvelopeEffectAdapterInterface* getToneEnvelope();
	virtual BitcrusherEffectAdapterInterface* getBitcrusherEffect();
	virtual StateVariableFilterAdapterInterface* getFilter();
	virtual Mixer4AdapterInterface* getPrefilterMixer();
	virtual Mixer4AdapterInterface* getFilterMixer();
	virtual Mixer4AdapterInterface* getOscillatorMixer();
	virtual AudioOutputI2SAdapterInterface* getOutput();

private:
	static const int OUTPUT_CHANNEL_1 = 0;
	static const int OUTPUT_CHANNEL_3 = 2;

	static const int INPUT_CHANNEL_1 = 0;
	static const int INPUT_CHANNEL_2 = 1;
	static const int INPUT_CHANNEL_3 = 2;
	static const int INPUT_CHANNEL_4 = 3;

	SineOscillatorAdapterInterface* sineOscillator;
	FrequencyModulatedSineOscillatorAdapterInterface* fmOscillator;
	WaveformOscillatorAdapterInterface* waveformOscillator;
	PulseWidthModulationOscillatorAdapterInterface* pulseWidthModulationOscillator;
	WhiteNoiseGeneratorAdapterInterface* whiteNoiseGenerator;
	SimpleDrumAdapterInterface* simpleDrum;
	EnvelopeEffectAdapterInterface* noiseEnvelope;
	EnvelopeEffectAdapterInterface* toneEnvelope;
	BitcrusherEffectAdapterInterface* bitcrusherEffect;
	StateVariableFilterAdapterInterface* filter;
	Mixer4AdapterInterface* prefilterMixer;
	Mixer4AdapterInterface* filterMixer;
	Mixer4AdapterInterface* oscillatorMixer;
	AudioOutputI2SAdapterInterface* output;

	void wireUpOscillators(AudioLibraryProviderInterface* libraryProvider);
	void wireUpEnvelopes(AudioLibraryProviderInterface* libraryProvider);
	void wireUpFilter(AudioLibraryProviderInterface* libraryProvider);
	void wireUpOutput(AudioLibraryProviderInterface* libraryProvider);
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_ANNARBORPERCUSSIONSYNTHESIZERARCHITECTURE_H_ */
