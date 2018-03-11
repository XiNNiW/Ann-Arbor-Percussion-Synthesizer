/*
 * TeensyBitcrusherEffect.h
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYBITCRUSHEREFFECT_H_
#define SRC_TEENSYBITCRUSHEREFFECT_H_

#include <BitcrusherEffectAdapterInterface.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyBitcrusherEffect: public BitcrusherEffectAdapterInterface {
public:
	TeensyBitcrusherEffect();
	virtual ~TeensyBitcrusherEffect();
	void bits(unsigned int b); //uint8_t
	void sampleRate(float hz);
private:
	AudioEffectBitcrusher* bitcrusher;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYBITCRUSHEREFFECT_H_ */
