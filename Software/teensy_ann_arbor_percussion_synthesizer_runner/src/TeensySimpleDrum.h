/*
 * TeensySimpleDrum.h
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYSIMPLEDRUM_H_
#define SRC_TEENSYSIMPLEDRUM_H_

#include <SimpleDrumAdapterInterface.h>
#include <TeensyAudioStream.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensySimpleDrum: public SimpleDrumAdapterInterface, public TeensyAudioStream {
public:
	TeensySimpleDrum();
	virtual ~TeensySimpleDrum();
	void noteOn();
	void frequency(float freq);
	void length(int milliseconds); //int32_t
	void secondMix(float level);
	void pitchMod(float depth);
	AudioStream* getStream();
private:
	AudioSynthSimpleDrum drum;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYSIMPLEDRUM_H_ */
