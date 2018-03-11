/*
 * TeensyAudioLibraryProvider.cpp
 *
 *  Created on: Mar 9, 2018
 *      Author: xinniw
 */

#include <TeensyAudioLibraryProvider.h>
#include <TeensyAudioOutputI2S.h>
#include <TeensyAudioConnection.h>
#include <TeensyAudioMixer4.h>
#include <TeensyWhiteNoiseGenerator.h>
#include <TeensySimpleDrum.h>
#include <TeensyWaveformOscillator.h>
#include <TeensySineOscillator.h>
#include <TeensyFrequencyModulatedSineOscillator.h>
#include <TeensyPulseWidthModulationOscillator.h>
#include <TeensyStateVariableFilter.h>
#include <TeensyEnvelopeEffect.h>
#include <TeensyBitcrusherEffect.h>
#include <Audio.h>

namespace AnnArborPercussion {

TeensyAudioLibraryProvider::TeensyAudioLibraryProvider() {
	// TODO Auto-generated constructor stub

}

TeensyAudioLibraryProvider::~TeensyAudioLibraryProvider() {
	// TODO Auto-generated destructor stub
}

AudioOutputI2SAdapterInterface* TeensyAudioLibraryProvider::createOutput(){
	using AnnArborPercussion::TeensyAudioOutputI2S;
	return new TeensyAudioOutputI2S();
};

AudioConnectionAdapterInterface* TeensyAudioLibraryProvider::createAudioConnection(
		AudioStreamAdapterInterface* source,
		AudioStreamAdapterInterface* destination){
	using AnnArborPercussion::TeensyAudioConnection;
	return new TeensyAudioConnection(source,destination);

};
AudioConnectionAdapterInterface* TeensyAudioLibraryProvider::createAudioConnection(
		AudioStreamAdapterInterface* source, unsigned char sourceOutput,
		AudioStreamAdapterInterface* destination,
		unsigned char destinationInput){
	using AnnArborPercussion::TeensyAudioConnection;
	return new TeensyAudioConnection(source,sourceOutput,destination,destinationInput);
};
Mixer4AdapterInterface* TeensyAudioLibraryProvider::create4ChannelMixer(){
	using AnnArborPercussion::TeensyAudioMixer4;
	return new TeensyAudioMixer4();
};
WhiteNoiseGeneratorAdapterInterface* TeensyAudioLibraryProvider::createWhiteNoiseSynth(){
	using AnnArborPercussion::TeensyWhiteNoiseGenerator;
	return new TeensyWhiteNoiseGenerator();
};
SimpleDrumAdapterInterface* TeensyAudioLibraryProvider::createSimpleDrum(){
	using AnnArborPercussion::TeensySimpleDrum;
	return new TeensySimpleDrum();
};
WaveformOscillatorAdapterInterface* TeensyAudioLibraryProvider::createWaveformSynth(){
	using AnnArborPercussion::TeensyWaveformOscillator;
	return new TeensyWaveformOscillator();
};
SineOscillatorAdapterInterface* TeensyAudioLibraryProvider::createSineWaveformSynth(){
	using AnnArborPercussion::TeensySineOscillator;
	return new TeensySineOscillator();
};
FrequencyModulatedSineOscillatorAdapterInterface* TeensyAudioLibraryProvider::createModulatedSineWaveformSynth(){
	using AnnArborPercussion::TeensyFrequencyModulatedSineOscillator;
	return new TeensyFrequencyModulatedSineOscillator();
};
PulseWidthModulationOscillatorAdapterInterface* TeensyAudioLibraryProvider::createPWMWaveformSynth(){
	using AnnArborPercussion::TeensyPulseWidthModulationOscillator;
	return new TeensyPulseWidthModulationOscillator();
};
StateVariableFilterAdapterInterface* TeensyAudioLibraryProvider::createStateVariableFilter(){
	using AnnArborPercussion::TeensyStateVariableFilter;
	return new TeensyStateVariableFilter();
};
EnvelopeEffectAdapterInterface* TeensyAudioLibraryProvider::createEnvelopeEffect(){
	using AnnArborPercussion::TeensyEnvelopeEffect;
	return new TeensyEnvelopeEffect();
};
BitcrusherEffectAdapterInterface* TeensyAudioLibraryProvider::createBitcrusherEffect(){
	using AnnArborPercussion::TeensyBitcrusherEffect;
	return new TeensyBitcrusherEffect();
};

} /* namespace AnnArborPercussion */
