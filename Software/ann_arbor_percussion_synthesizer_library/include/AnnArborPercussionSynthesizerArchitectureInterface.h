/*
 * AnnArborPercussionSynthesizerArchitectureInterface.h
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_ANNARBORPERCUSSIONSYNTHESIZERARCHITECTUREINTERFACE_H_
#define INCLUDE_ANNARBORPERCUSSIONSYNTHESIZERARCHITECTUREINTERFACE_H_

#include <SimpleDrumAdapterInterface.h>
#include <SineOscillatorAdapterInterface.h>
#include <FrequencyModulatedSineOscillatorAdapterInterface.h>
#include <WaveformOscillatorAdapterInterface.h>
#include <PulseWidthModulationOscillatorAdapterInterface.h>
#include <WhiteNoiseGeneratorAdapterInterface.h>
#include <EnvelopeEffectAdapterInterface.h>
#include <SineOscillatorAdapterInterface.h>
#include <BitcrusherEffectAdapterInterface.h>
#include <StateVariableFilterAdapterInterface.h>
#include <Mixer4AdapterInterface.h>
#include <AudioOutputI2SAdapterInterface.h>

namespace AnnArborPercussion {

class AnnArborPercussionSynthesizerArchitectureInterface {
public:
	virtual ~AnnArborPercussionSynthesizerArchitectureInterface();
	virtual SineOscillatorAdapterInterface* getSineOscillator()=0;
	virtual FrequencyModulatedSineOscillatorAdapterInterface* getSineFrequencyModulationOscillator()=0;
	virtual WaveformOscillatorAdapterInterface* getWaveformOscillator()=0;
	virtual PulseWidthModulationOscillatorAdapterInterface* getPulseWidthModulationOscillator()=0;
	virtual WhiteNoiseGeneratorAdapterInterface* getWhiteNoiseGenerator()=0;
	virtual SimpleDrumAdapterInterface* getSimpleDrumSynthesizer()=0;
	virtual EnvelopeEffectAdapterInterface* getNoiseEnvelope()=0;
	virtual EnvelopeEffectAdapterInterface* getToneEnvelope()=0;
	virtual BitcrusherEffectAdapterInterface* getBitcrusherEffect()=0;
	virtual StateVariableFilterAdapterInterface* getFilter()=0;
	virtual Mixer4AdapterInterface* getPrefilterMixer()=0;
	virtual Mixer4AdapterInterface* getFilterMixer()=0;
	virtual Mixer4AdapterInterface* getOscillatorMixer()=0;
	virtual AudioOutputI2SAdapterInterface* getOutput()=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_ANNARBORPERCUSSIONSYNTHESIZERARCHITECTUREINTERFACE_H_ */
