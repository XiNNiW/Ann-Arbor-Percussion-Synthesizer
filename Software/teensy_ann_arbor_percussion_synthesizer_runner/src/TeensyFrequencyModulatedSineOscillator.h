/*
 * TeensyFrequencyModulatedSineOscillator.h
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYFREQUENCYMODULATEDSINEOSCILLATOR_H_
#define SRC_TEENSYFREQUENCYMODULATEDSINEOSCILLATOR_H_

#include <FrequencyModulatedSineOscillatorAdapterInterface.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyFrequencyModulatedSineOscillator: public FrequencyModulatedSineOscillatorAdapterInterface {
public:
	TeensyFrequencyModulatedSineOscillator();
	virtual ~TeensyFrequencyModulatedSineOscillator();
	void frequency(float freq);
	void phase(float angle);
	void amplitude(float n);
private:
	AudioSynthWaveformSineModulated* oscillator;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYFREQUENCYMODULATEDSINEOSCILLATOR_H_ */
