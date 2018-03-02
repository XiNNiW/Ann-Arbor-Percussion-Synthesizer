/*
 * AudioSynthWaveformAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOSYNTHWAVEFORMADAPTERINTERFACE_H_
#define INCLUDE_AUDIOSYNTHWAVEFORMADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class AudioSynthWaveformAdapterInterface : public AudioStreamAdapterInterface {
public:
	virtual ~AudioSynthWaveformAdapterInterface(){};
	virtual void frequency(float t_freq)=0;
	virtual void phase(float angle)=0;
	virtual void amplitude(float n)=0;
	virtual void offset(float n)=0;
	virtual void pulseWidth(float n)=0;
	virtual void begin(short t_type)=0;
	virtual void begin(float t_amp, float t_freq, short t_type)=0;
	virtual void arbitraryWaveform(const int *data, float maxFreq)=0;
	virtual void update(void)=0;

};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOSYNTHWAVEFORMADAPTERINTERFACE_H_ */
