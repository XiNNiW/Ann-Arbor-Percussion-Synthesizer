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
//	patchCable1 = libraryProvider->createAudioConnection(this->sineOscillator,
//			this->pulseWidthModulationOscillator);
//	patchCable2 = libraryProvider->createAudioConnection(this->sineOscillator,
//			this->fmOscillator);
//	patchCable6 = libraryProvider->createAudioConnection(this->fmOscillator,
//				OUTPUT_CHANNEL_1, this->oscillatorMixer, INPUT_CHANNEL_4);
//	patchCable3 = libraryProvider->createAudioConnection(this->waveformOscillator,
//			OUTPUT_CHANNEL_1, this->oscillatorMixer, INPUT_CHANNEL_2);
//	patchCable4 = libraryProvider->createAudioConnection(this->pulseWidthModulationOscillator,
//			OUTPUT_CHANNEL_1, this->oscillatorMixer, INPUT_CHANNEL_3);
	patchCable5 = libraryProvider->createAudioConnection(this->simpleDrum, OUTPUT_CHANNEL_1,
			this->oscillatorMixer, INPUT_CHANNEL_1);

}

void AnnArborPercussionSynthesizerArchitecture::wireUpEnvelopes(
		AudioLibraryProviderInterface* libraryProvider) {
	patchCable7 = libraryProvider->createAudioConnection(this->noiseEnvelope,
			OUTPUT_CHANNEL_1, this->prefilterMixer, INPUT_CHANNEL_2);
//	patchCable8 = libraryProvider->createAudioConnection(this->bitcrusherEffect,
//			OUTPUT_CHANNEL_1, this->prefilterMixer, INPUT_CHANNEL_1);
//	patchCable9 = libraryProvider->createAudioConnection(this->whiteNoiseGenerator,
//			this->noiseEnvelope);
	patchCable10 = libraryProvider->createAudioConnection(this->oscillatorMixer,
			this->toneEnvelope);
//	patchCable11 = libraryProvider->createAudioConnection(this->toneEnvelope,
//			this->bitcrusherEffect);

}

void AnnArborPercussionSynthesizerArchitecture::wireUpFilter(
		AudioLibraryProviderInterface* libraryProvider) {
//	patchCable12 = libraryProvider->createAudioConnection(this->prefilterMixer,
//			OUTPUT_CHANNEL_1, this->filter, INPUT_CHANNEL_1);
//	patchCable13 = libraryProvider->createAudioConnection(this->prefilterMixer,
//			OUTPUT_CHANNEL_1, this->filterMixer, INPUT_CHANNEL_3);
//	patchCable14 = libraryProvider->createAudioConnection(this->filter, OUTPUT_CHANNEL_1,
//			this->filterMixer, INPUT_CHANNEL_1);
//	patchCable15 = libraryProvider->createAudioConnection(this->filter, OUTPUT_CHANNEL_3,
//			this->filterMixer, INPUT_CHANNEL_2);
}

void AnnArborPercussionSynthesizerArchitecture::wireUpOutput(
		AudioLibraryProviderInterface* libraryProvider) {
	patchCable16 = libraryProvider->createAudioConnection(this->simpleDrum, OUTPUT_CHANNEL_1,
			this->output, INPUT_CHANNEL_1);
//	patchCable16 = libraryProvider->createAudioConnection(this->filterMixer, OUTPUT_CHANNEL_1,
//			this->output, INPUT_CHANNEL_1);
//	patchCable17 = libraryProvider->createAudioConnection(this->filterMixer, OUTPUT_CHANNEL_1,
//			this->output, INPUT_CHANNEL_2);
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


//	wireUpEnvelopes(libraryProvider);
//	wireUpOscillators(libraryProvider);
//	wireUpFilter(libraryProvider);
	wireUpOutput(libraryProvider);



}

SineOscillatorAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getSineOscillator(){
	return this->sineOscillator;
};
FrequencyModulatedSineOscillatorAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getSineFrequencyModulationOscillator(){
	return this->fmOscillator;
};
WaveformOscillatorAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getWaveformOscillator(){
	return this->waveformOscillator;
};
WhiteNoiseGeneratorAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getWhiteNoiseGenerator(){
	return this->whiteNoiseGenerator;
};
PulseWidthModulationOscillatorAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getPulseWidthModulationOscillator(){
	return this->pulseWidthModulationOscillator;
}
SimpleDrumAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getSimpleDrumSynthesizer(){
	return this->simpleDrum;
};
EnvelopeEffectAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getNoiseEnvelope(){
	return this->noiseEnvelope;
};
EnvelopeEffectAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getToneEnvelope(){
	return this->toneEnvelope;
};
StateVariableFilterAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getFilter(){
	return this->filter;
}
BitcrusherEffectAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getBitcrusherEffect(){
	return this->bitcrusherEffect;
};
Mixer4AdapterInterface* AnnArborPercussionSynthesizerArchitecture::getPrefilterMixer(){
	return this->prefilterMixer;
};
Mixer4AdapterInterface* AnnArborPercussionSynthesizerArchitecture::getFilterMixer(){
	return this->filterMixer;
};
Mixer4AdapterInterface* AnnArborPercussionSynthesizerArchitecture::getOscillatorMixer(){
	return this->oscillatorMixer;
};
AudioOutputI2SAdapterInterface* AnnArborPercussionSynthesizerArchitecture::getOutput(){
	return this->output;
};

} /* namespace AnnArborPercussion */
