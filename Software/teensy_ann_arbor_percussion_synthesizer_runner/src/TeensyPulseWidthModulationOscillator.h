/*
 * TeensyPulseWidthModulationOscillator.h
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYPULSEWIDTHMODULATIONOSCILLATOR_H_
#define SRC_TEENSYPULSEWIDTHMODULATIONOSCILLATOR_H_

#include <PulseWidthModulationOscillatorAdapterInterface.h>
#include <TeensyAudioStream.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyPulseWidthModulationOscillator: public PulseWidthModulationOscillatorAdapterInterface, public TeensyAudioStream {
public:
	TeensyPulseWidthModulationOscillator();
	virtual ~TeensyPulseWidthModulationOscillator();
	void frequency(float freq);
	void amplitude(float n);
	AudioStream* getStream();
private:
	AudioSynthWaveformPWM oscillator;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYPULSEWIDTHMODULATIONOSCILLATOR_H_ */
