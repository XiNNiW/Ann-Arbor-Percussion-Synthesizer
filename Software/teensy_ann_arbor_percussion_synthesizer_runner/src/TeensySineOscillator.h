/*
 * TeensySineOscillator.h
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYSINEOSCILLATOR_H_
#define SRC_TEENSYSINEOSCILLATOR_H_

#include <SineOscillatorAdapterInterface.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensySineOscillator: public SineOscillatorAdapterInterface {
public:
	TeensySineOscillator();
	virtual ~TeensySineOscillator();
	void frequency(float freq);
	void phase(float angle);
	void amplitude(float n);
private:
	AudioSynthWaveformSine* oscillator;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYSINEOSCILLATOR_H_ */
