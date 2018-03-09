/*
 * TeensyAudioLibraryProvider.cpp
 *
 *  Created on: Mar 9, 2018
 *      Author: xinniw
 */

#include <TeensyAudioLibraryProvider.h>
#include <Audio.h>

namespace AnnArborPercussion {

TeensyAudioLibraryProvider::TeensyAudioLibraryProvider() {
	// TODO Auto-generated constructor stub

}

TeensyAudioLibraryProvider::~TeensyAudioLibraryProvider() {
	// TODO Auto-generated destructor stub
}

AudioOutputI2SAdapterInterface* TeensyAudioLibraryProvider::createOutput(){
	return new AudioOutputI2S();
};
AudioConnectionAdapterInterface* TeensyAudioLibraryProvider::createAudioConnection(
		AudioStreamAdapterInterface* source,
		AudioStreamAdapterInterface* destination){
	return new AudioConnection(source,destination);
};
AudioConnectionAdapterInterface* TeensyAudioLibraryProvider::createAudioConnection(
		AudioStreamAdapterInterface* source, unsigned char sourceOutput,
		AudioStreamAdapterInterface* destination,
		unsigned char destinationInput){
	return new AudioConnection(source,sourceOutput,destination,destinationInput);
};
Mixer4AdapterInterface* TeensyAudioLibraryProvider::create4ChannelMixer(){
	return new AudioMixer4();
};
WhiteNoiseGeneratorAdapterInterface* TeensyAudioLibraryProvider::createWhiteNoiseSynth(){
	return new AudioSynthNoiseWhite();
};
SimpleDrumAdapterInterface* TeensyAudioLibraryProvider::createSimpleDrum(){
	return new AudioSynthSimpleDrum();
};
WaveformOscillatorAdapterInterface* TeensyAudioLibraryProvider::createWaveformSynth(){
	return new AudioSynthWaveformSine();
};
SineOscillatorAdapterInterface* TeensyAudioLibraryProvider::createSineWaveformSynth(){
	return new AudioSynthWaveformSine();
};
FrequencyModulatedSineOscillatorAdapterInterface* TeensyAudioLibraryProvider::createModulatedSineWaveformSynth(){
	return new AudioSynthWaveformSineModulated();
};
PulseWidthModulationOscillatorAdapterInterface* TeensyAudioLibraryProvider::createPWMWaveformSynth(){
	return new AudioSynthWaveformPWM();
};
StateVariableFilterAdapterInterface* TeensyAudioLibraryProvider::createStateVariableFilter(){
	return new AudioFilterStateVariable();
};
EnvelopeEffectAdapterInterface* TeensyAudioLibraryProvider::createEnvelopeEffect(){
	return new AudioEffectEnvelope();
};
BitcrusherEffectAdapterInterface* TeensyAudioLibraryProvider::createBitcrusherEffect(){
	return new AudioEffectBitcrusher();
};

} /* namespace AnnArborPercussion */
