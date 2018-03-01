/*
 * AudioEffectBitcrusherAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOEFFECTBITCRUSHERADAPTERINTERFACE_H_
#define INCLUDE_AUDIOEFFECTBITCRUSHERADAPTERINTERFACE_H_

namespace AnnArborPercussion {

class AudioEffectBitcrusherAdapterInterface {
public:
	virtual ~AudioEffectBitcrusherAdapterInterface();
	virtual void bits(int b)=0; //uint8_t
	virtual void sampleRate(float hz)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOEFFECTBITCRUSHERADAPTERINTERFACE_H_ */
