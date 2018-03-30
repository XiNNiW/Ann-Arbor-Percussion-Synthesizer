/*
 * TeensyWhiteNoiseGenerator.h
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYWHITENOISEGENERATOR_H_
#define SRC_TEENSYWHITENOISEGENERATOR_H_

#include <WhiteNoiseGeneratorAdapterInterface.h>
#include <TeensyAudioStream.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyWhiteNoiseGenerator: public WhiteNoiseGeneratorAdapterInterface, public TeensyAudioStream {
public:
	TeensyWhiteNoiseGenerator();
	virtual ~TeensyWhiteNoiseGenerator();
	void amplitude(float level);
	AudioStream* getStream();
private:
	AudioSynthNoiseWhite whiteNoiseGenerator;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYWHITENOISEGENERATOR_H_ */
