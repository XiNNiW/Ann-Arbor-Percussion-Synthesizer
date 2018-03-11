/*
 * TeensyWhiteNoiseGenerator.h
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYWHITENOISEGENERATOR_H_
#define SRC_TEENSYWHITENOISEGENERATOR_H_

#include <WhiteNoiseGeneratorAdapterInterface.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyWhiteNoiseGenerator: public WhiteNoiseGeneratorAdapterInterface {
public:
	TeensyWhiteNoiseGenerator();
	virtual ~TeensyWhiteNoiseGenerator();
	void amplitude(float level);
private:
	AudioSynthNoiseWhite* whiteNoiseGenerator;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYWHITENOISEGENERATOR_H_ */
