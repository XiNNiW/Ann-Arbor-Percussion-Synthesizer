/*
 * TeensyAudioLibraryProvider.h
 *
 *  Created on: Mar 9, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYAUDIOLIBRARYPROVIDER_H_
#define SRC_TEENSYAUDIOLIBRARYPROVIDER_H_

#include <AudioLibraryProviderInterface.h>

namespace AnnArborPercussion {

class TeensyAudioLibraryProvider: public AudioLibraryProviderInterface {
public:
	TeensyAudioLibraryProvider();
	virtual ~TeensyAudioLibraryProvider();
	AudioOutputI2SAdapterInterface* createOutput();
	AudioConnectionAdapterInterface* createAudioConnection(
			AudioStreamAdapterInterface* source,
			AudioStreamAdapterInterface* destination);
	AudioConnectionAdapterInterface* createAudioConnection(
			AudioStreamAdapterInterface* source, unsigned char sourceOutput,
			AudioStreamAdapterInterface* destination,
			unsigned char destinationInput);
	Mixer4AdapterInterface* create4ChannelMixer();
	WhiteNoiseGeneratorAdapterInterface* createWhiteNoiseSynth();
	SimpleDrumAdapterInterface* createSimpleDrum();
	WaveformOscillatorAdapterInterface* createWaveformSynth();
	SineOscillatorAdapterInterface* createSineWaveformSynth();
	FrequencyModulatedSineOscillatorAdapterInterface* createModulatedSineWaveformSynth();
	PulseWidthModulationOscillatorAdapterInterface* createPWMWaveformSynth();
	StateVariableFilterAdapterInterface* createStateVariableFilter();
	EnvelopeEffectAdapterInterface* createEnvelopeEffect();
	BitcrusherEffectAdapterInterface* createBitcrusherEffect();
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYAUDIOLIBRARYPROVIDER_H_ */
