/*
 * AudioSynthWaveformPWMAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_PULSEWIDTHMODULATIONOSCILLATORADAPTERINTERFACE_H_
#define INCLUDE_PULSEWIDTHMODULATIONOSCILLATORADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>
namespace AnnArborPercussion {

class PulseWidthModulationOscillatorAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~PulseWidthModulationOscillatorAdapterInterface();
	virtual void frequency(float freq)=0;
	virtual void amplitude(float n)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_PULSEWIDTHMODULATIONOSCILLATORADAPTERINTERFACE_H_ */

