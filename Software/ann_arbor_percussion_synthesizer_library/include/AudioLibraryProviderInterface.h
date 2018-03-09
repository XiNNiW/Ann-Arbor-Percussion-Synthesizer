/*
 * AudioLibraryProviderInterface.h
 *
 *  Created on: Mar 3, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOLIBRARYPROVIDERINTERFACE_H_
#define INCLUDE_AUDIOLIBRARYPROVIDERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>
#include <AudioConnectionAdapterInterface.h>
#include <AudioOutputI2SAdapterInterface.h>
#include <BitcrusherEffectAdapterInterface.h>
#include <EnvelopeEffectAdapterInterface.h>
#include <FrequencyModulatedSineOscillatorAdapterInterface.h>
#include <Mixer4AdapterInterface.h>
#include <PulseWidthModulationOscillatorAdapterInterface.h>
#include <SimpleDrumAdapterInterface.h>
#include <SineOscillatorAdapterInterface.h>
#include <StateVariableFilterAdapterInterface.h>
#include <WaveformOscillatorAdapterInterface.h>
#include <WhiteNoiseGeneratorAdapterInterface.h>

namespace AnnArborPercussion {

class AudioLibraryProviderInterface {
public:
	virtual ~AudioLibraryProviderInterface();
	virtual AudioOutputI2SAdapterInterface* createOutput()=0;
	virtual AudioConnectionAdapterInterface* createAudioConnection(
			AudioStreamAdapterInterface* source,
			AudioStreamAdapterInterface* destination)=0;
	virtual AudioConnectionAdapterInterface* createAudioConnection(
			AudioStreamAdapterInterface* source, unsigned char sourceOutput,
			AudioStreamAdapterInterface* destination,
			unsigned char destinationInput)=0;
	virtual Mixer4AdapterInterface* create4ChannelMixer()=0;
	virtual WhiteNoiseGeneratorAdapterInterface* createWhiteNoiseSynth()=0;
	virtual SimpleDrumAdapterInterface* createSimpleDrum()=0;
	virtual WaveformOscillatorAdapterInterface* createWaveformSynth()=0;
	virtual SineOscillatorAdapterInterface* createSineWaveformSynth()=0;
	virtual FrequencyModulatedSineOscillatorAdapterInterface* createModulatedSineWaveformSynth()=0;
	virtual PulseWidthModulationOscillatorAdapterInterface* createPWMWaveformSynth()=0;
	virtual StateVariableFilterAdapterInterface* createStateVariableFilter()=0;
	virtual EnvelopeEffectAdapterInterface* createEnvelopeEffect()=0;
	virtual BitcrusherEffectAdapterInterface* createBitcrusherEffect()=0;

};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOLIBRARYPROVIDERINTERFACE_H_ */

