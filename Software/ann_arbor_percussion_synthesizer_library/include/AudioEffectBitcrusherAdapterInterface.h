/*
 * AudioEffectBitcrusherAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOEFFECTBITCRUSHERADAPTERINTERFACE_H_
#define INCLUDE_AUDIOEFFECTBITCRUSHERADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>
namespace AnnArborPercussion {

class AudioEffectBitcrusherAdapterInterface : public AudioStreamAdapterInterface{
public:
	virtual ~AudioEffectBitcrusherAdapterInterface(){};
	virtual void bits(unsigned int b)=0; //uint8_t
	virtual void sampleRate(float hz)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOEFFECTBITCRUSHERADAPTERINTERFACE_H_ */
