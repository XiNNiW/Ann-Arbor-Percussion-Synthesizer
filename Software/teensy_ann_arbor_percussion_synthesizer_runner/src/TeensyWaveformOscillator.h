/*
 * TeensyWaveformOscillator.h
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYWAVEFORMOSCILLATOR_H_
#define SRC_TEENSYWAVEFORMOSCILLATOR_H_

#include <WaveformOscillatorAdapterInterface.h>
#include <TeensyAudioStream.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyWaveformOscillator: public WaveformOscillatorAdapterInterface, public TeensyAudioStream {
public:
	TeensyWaveformOscillator();
	virtual ~TeensyWaveformOscillator();
	void frequency(float t_freq);
	void phase(float angle);
	void amplitude(float n);
	void offset(float n);
	void pulseWidth(float n);
	void begin(short t_type);
	void begin(float t_amp, float t_freq, short t_type);
	void arbitraryWaveform(const short int *data, float maxFreq);
	AudioStream* getStream();
private:
	AudioSynthWaveform waveform;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYWAVEFORMOSCILLATOR_H_ */
