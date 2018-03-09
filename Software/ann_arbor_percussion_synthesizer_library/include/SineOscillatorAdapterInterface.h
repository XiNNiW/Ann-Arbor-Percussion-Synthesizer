/*
 * AudioSynthWaveformSineAdapter.h
 *
 *  Created on: Feb 27, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_SINEOSCILLATORADAPTERINTERFACE_H_
#define INCLUDE_SINEOSCILLATORADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>
namespace AnnArborPercussion {

class SineOscillatorAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~SineOscillatorAdapterInterface();
	virtual void frequency(float freq)=0;
	virtual void phase(float angle)=0;
	virtual void amplitude(float n)=0;
	virtual void update()=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_SINEOSCILLATORADAPTERINTERFACE_H_ */

