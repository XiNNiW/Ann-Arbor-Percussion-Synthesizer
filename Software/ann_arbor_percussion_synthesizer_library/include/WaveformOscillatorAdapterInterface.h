/*
 * AudioSynthWaveformAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_WAVEFORMOSCILLATORADAPTERINTERFACE_H_
#define INCLUDE_WAVEFORMOSCILLATORADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class WaveformOscillatorAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~WaveformOscillatorAdapterInterface();
	virtual void frequency(float t_freq)=0;
	virtual void phase(float angle)=0;
	virtual void amplitude(float n)=0;
	virtual void offset(float n)=0;
	virtual void pulseWidth(float n)=0;
	virtual void begin(short t_type)=0;
	virtual void begin(float t_amp, float t_freq, short t_type)=0;
	virtual void arbitraryWaveform(const short int *data, float maxFreq)=0;

};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_WAVEFORMOSCILLATORADAPTERINTERFACE_H_ */

