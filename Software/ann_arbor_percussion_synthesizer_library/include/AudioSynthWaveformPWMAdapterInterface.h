/*
 * AudioSynthWaveformPWMAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOSYNTHWAVEFORMPWMADAPTERINTERFACE_H_
#define INCLUDE_AUDIOSYNTHWAVEFORMPWMADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>
namespace AnnArborPercussion {

class AudioSynthWaveformPWMAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~AudioSynthWaveformPWMAdapterInterface();
	virtual void frequency(float freq)=0;
	virtual void amplitude(float n)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOSYNTHWAVEFORMPWMADAPTERINTERFACE_H_ */

