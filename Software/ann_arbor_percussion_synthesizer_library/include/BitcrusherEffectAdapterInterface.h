/*
 * AudioEffectBitcrusherAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_BITCRUSHEREFFECTADAPTERINTERFACE_H_
#define INCLUDE_BITCRUSHEREFFECTADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>
namespace AnnArborPercussion {

class BitcrusherEffectAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~BitcrusherEffectAdapterInterface();
	virtual void bits(unsigned int b)=0; //uint8_t
	virtual void sampleRate(float hz)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_BITCRUSHEREFFECTADAPTERINTERFACE_H_ */

