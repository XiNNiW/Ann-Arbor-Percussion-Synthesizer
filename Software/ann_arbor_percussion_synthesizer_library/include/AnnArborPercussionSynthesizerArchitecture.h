/*
 * AnnArborPercussionSynthesizerArchitecture.h
 *
 *  Created on: Mar 3, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_ANNARBORPERCUSSIONSYNTHESIZERARCHITECTURE_H_
#define INCLUDE_ANNARBORPERCUSSIONSYNTHESIZERARCHITECTURE_H_

#include <AudioLibraryProviderInterface.h>

namespace AnnArborPercussion {

class AnnArborPercussionSynthesizerArchitecture {
public:
	virtual ~AnnArborPercussionSynthesizerArchitecture();
	AnnArborPercussionSynthesizerArchitecture(AudioLibraryProviderInterface* libraryProvider);
	AudioSynthWaveformSineAdapterInterface* getSineOscillator();
	AudioSynthWaveformSineModulatedAdapterInterface* getSineFrequencyModulationOscillator();
	AudioSynthWaveformAdapterInterface* getWaveformOscillator();
	AudioSynthWaveformPWMAdapterInterface* getPulseWidthModulationOscillator();
	AudioSynthNoiseWhiteAdapterInterface* getWhiteNoiseGenerator();
	AudioSynthSimpleDrumAdapterInterface* getSimpleDrumSynthesizer();
	AudioEffectEnvelopeAdapterInterface* getNoiseEnvelope();
	AudioEffectEnvelopeAdapterInterface* getToneEnvelope();
	AudioEffectBitcrusherAdapterInterface* getBitcrusherEffect();
	AudioFilterStateVariableAdapterInterface* getFilter();
	AudioMixer4AdapterInterface* getPrefilterMixer();
	AudioMixer4AdapterInterface* getFilterMixer();
	AudioMixer4AdapterInterface* getOscillatorMixer();
	AudioOutputI2SAdapterInterface* getOutput();

private:
	AudioSynthWaveformSineAdapterInterface* sineOscillator;
	AudioSynthWaveformSineModulatedAdapterInterface* fmOscillator;
	AudioSynthWaveformAdapterInterface* waveformOscillator;
	AudioSynthWaveformPWMAdapterInterface* pulseWidthModulationOscillator;
	AudioSynthNoiseWhiteAdapterInterface* whiteNoiseGenerator;
	AudioSynthSimpleDrumAdapterInterface* simpleDrum;
	AudioEffectEnvelopeAdapterInterface* noiseEnvelope;
	AudioEffectEnvelopeAdapterInterface* toneEnvelope;
	AudioEffectBitcrusherAdapterInterface* bitcrusherEffect;
	AudioFilterStateVariableAdapterInterface* filter;
	AudioMixer4AdapterInterface* prefilterMixer;
	AudioMixer4AdapterInterface* filterMixer;
	AudioMixer4AdapterInterface* oscillatorMixer;
	AudioOutputI2SAdapterInterface* output;

};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_ANNARBORPERCUSSIONSYNTHESIZERARCHITECTURE_H_ */
