/*
 * AudioSynthWaveformSineModulatedAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_FREQUENCYMODULATEDSINEOSCILLATORADAPTERINTERFACE_H_
#define INCLUDE_FREQUENCYMODULATEDSINEOSCILLATORADAPTERINTERFACE_H_
#include <AudioStreamAdapterInterface.h>
namespace AnnArborPercussion {

class FrequencyModulatedSineOscillatorAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~FrequencyModulatedSineOscillatorAdapterInterface();
	virtual void frequency(float freq)=0;
	virtual void phase(float angle)=0;
	virtual void amplitude(float n)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_FREQUENCYMODULATEDSINEOSCILLATORADAPTERINTERFACE_H_ */

