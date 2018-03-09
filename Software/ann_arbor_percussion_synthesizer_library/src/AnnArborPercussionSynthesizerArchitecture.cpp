/*
 * AnnArborPercussionSynthesizerArchitecture.cpp
 *
 *  Created on: Mar 3, 2018
 *      Author: xinniw
 */

#include <AnnArborPercussionSynthesizerArchitecture.h>

namespace AnnArborPercussion {

AnnArborPercussionSynthesizerArchitecture::~AnnArborPercussionSynthesizerArchitecture() {
	// TODO Auto-generated destructor stub
}

void AnnArborPercussionSynthesizerArchitecture::wireUpOscillators(
		AudioLibraryProviderInterface* libraryProvider) {
	libraryProvider->createAudioConnection(this->sineOscillator,
			OUTPUT_CHANNEL_1, this->oscillatorMixer, input_channel_4);
	libraryProvider->createAudioConnection(this->waveformOscillator,
			OUTPUT_CHANNEL_1, this->oscillatorMixer, INPUT_CHANNEL_2);
	libraryProvider->createAudioConnection(this->pulseWidthModulationOscillator,
			OUTPUT_CHANNEL_1, this->oscillatorMixer, input_channel_3);
	libraryProvider->createAudioConnection(this->simpleDrum, OUTPUT_CHANNEL_1,
			this->oscillatorMixer, INPUT_CHANNEL_1);
	libraryProvider->createAudioConnection(this->sineOscillator,
			this->pulseWidthModulationOscillator);
	libraryProvider->createAudioConnection(this->sineOscillator,
			this->fmOscillator);
}

void AnnArborPercussionSynthesizerArchitecture::wireUpEnvelopes(
		AudioLibraryProviderInterface* libraryProvider) {
	libraryProvider->createAudioConnection(this->whiteNoiseGenerator,
			this->noiseEnvelope);
	libraryProvider->createAudioConnection(this->oscillatorMixer,
			this->toneEnvelope);
	libraryProvider->createAudioConnection(this->toneEnvelope,
			this->bitcrusherEffect);
	libraryProvider->createAudioConnection(this->noiseEnvelope,
			OUTPUT_CHANNEL_1, this->prefilterMixer, INPUT_CHANNEL_2);
	libraryProvider->createAudioConnection(this->bitcrusherEffect,
			OUTPUT_CHANNEL_1, this->prefilterMixer, INPUT_CHANNEL_1);
}

void AnnArborPercussionSynthesizerArchitecture::wireUpFilter(
		AudioLibraryProviderInterface* libraryProvider) {
	libraryProvider->createAudioConnection(this->prefilterMixer,
			OUTPUT_CHANNEL_1, this->filter, INPUT_CHANNEL_1);
	libraryProvider->createAudioConnection(this->prefilterMixer,
			OUTPUT_CHANNEL_1, this->filterMixer, input_channel_3);
	libraryProvider->createAudioConnection(this->filter, OUTPUT_CHANNEL_1,
			this->filterMixer, INPUT_CHANNEL_1);
	libraryProvider->createAudioConnection(this->filter, OUTPUT_CHANNEL_3,
			this->filterMixer, INPUT_CHANNEL_2);
}

void AnnArborPercussionSynthesizerArchitecture::wireUpOutput(
		AudioLibraryProviderInterface* libraryProvider) {
	libraryProvider->createAudioConnection(this->filterMixer, OUTPUT_CHANNEL_1,
			this->output, INPUT_CHANNEL_1);
	libraryProvider->createAudioConnection(this->filterMixer, OUTPUT_CHANNEL_1,
			this->output, INPUT_CHANNEL_2);
}

AnnArborPercussionSynthesizerArchitecture::AnnArborPercussionSynthesizerArchitecture(AudioLibraryProviderInterface* libraryProvider) {
	this->output=libraryProvider->createOutput();
	this->bitcrusherEffect=libraryProvider->createBitcrusherEffect();
	this->toneEnvelope=libraryProvider->createEnvelopeEffect();
	this->noiseEnvelope=libraryProvider->createEnvelopeEffect();
	this->filter=libraryProvider->createStateVariableFilter();
	this->pulseWidthModulationOscillator=libraryProvider->createPWMWaveformSynth();
	this->fmOscillator=libraryProvider->createModulatedSineWaveformSynth();
	this->sineOscillator=libraryProvider->createSineWaveformSynth();
	this->waveformOscillator=libraryProvider->createWaveformSynth();
	this->simpleDrum=libraryProvider->createSimpleDrum();
	this->whiteNoiseGenerator=libraryProvider->createWhiteNoiseSynth();
	this->prefilterMixer=libraryProvider->create4ChannelMixer();
	this->filterMixer=libraryProvider->create4ChannelMixer();
	this->oscillatorMixer=libraryProvider->create4ChannelMixer();

	wireUpOscillators(libraryProvider);
	wireUpEnvelopes(libraryProvider);
	wireUpFilter(libraryProvider);
	wireUpOutput(libraryProvider);
}

AudioSynthWaveformSineAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getSineOscillator(){
	return this->sineOscillator;
};
AudioSynthWaveformSineModulatedAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getSineFrequencyModulationOscillator(){
	return this->fmOscillator;
};
AudioSynthWaveformAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getWaveformOscillator(){
	return this->waveformOscillator;
};
AudioSynthNoiseWhiteAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getWhiteNoiseGenerator(){
	return this->whiteNoiseGenerator;
};
AudioSynthWaveformPWMAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getPulseWidthModulationOscillator(){
	return this->pulseWidthModulationOscillator;
}
AudioSynthSimpleDrumAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getSimpleDrumSynthesizer(){
	return this->simpleDrum;
};
AudioEffectEnvelopeAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getNoiseEnvelope(){
	return this->noiseEnvelope;
};
AudioEffectEnvelopeAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getToneEnvelope(){
	return this->toneEnvelope;
};
AudioFilterStateVariableAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getFilter(){
	return this->filter;
}
AudioEffectBitcrusherAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getBitcrusherEffect(){
	return this->bitcrusherEffect;
};
AudioMixer4AdapterInterface* AnnArborPercussionSynthesizerArchitecture::getPrefilterMixer(){
	return this->prefilterMixer;
};
AudioMixer4AdapterInterface* AnnArborPercussionSynthesizerArchitecture::getFilterMixer(){
	return this->filterMixer;
};
AudioMixer4AdapterInterface* AnnArborPercussionSynthesizerArchitecture::getOscillatorMixer(){
	return this->oscillatorMixer;
};
AudioOutputI2SAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getOutput(){
	return this->output;
};

} /* namespace AnnArborPercussion */