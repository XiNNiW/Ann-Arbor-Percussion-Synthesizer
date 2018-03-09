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
#include <AudioMixer4AdapterInterface.h>
#include <AudioSynthNoiseWhiteAdapterInterface.h>
#include <AudioSynthSimpleDrumAdapterInterface.h>
#include <AudioSynthWaveformAdapterInterface.h>
#include <AudioSynthWaveformSineAdapterInterface.h>
#include <AudioSynthWaveformSineModulatedAdapterInterface.h>
#include <AudioSynthWaveformPWMAdapterInterface.h>
#include <AudioFilterStateVariableAdapterInterface.h>
#include <AudioEffectEnvelopeAdapterInterface.h>
#include <AudioEffectBitcrusherAdapterInterface.h>

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
	virtual AudioMixer4AdapterInterface* create4ChannelMixer()=0;
	virtual AudioSynthNoiseWhiteAdapterInterface* createWhiteNoiseSynth()=0;
	virtual AudioSynthSimpleDrumAdapterInterface* createSimpleDrum()=0;
	virtual AudioSynthWaveformAdapterInterface* createWaveformSynth()=0;
	virtual AudioSynthWaveformSineAdapterInterface* createSineWaveformSynth()=0;
	virtual AudioSynthWaveformSineModulatedAdapterInterface* createModulatedSineWaveformSynth()=0;
	virtual AudioSynthWaveformPWMAdapterInterface* createPWMWaveformSynth()=0;
	virtual AudioFilterStateVariableAdapterInterface* createStateVariableFilter()=0;
	virtual AudioEffectEnvelopeAdapterInterface* createEnvelopeEffect()=0;
	virtual AudioEffectBitcrusherAdapterInterface* createBitcrusherEffect()=0;

};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOLIBRARYPROVIDERINTERFACE_H_ */

