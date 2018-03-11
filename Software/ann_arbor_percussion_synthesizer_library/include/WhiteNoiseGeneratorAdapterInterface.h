/*
 * AudioSynthNoiseWhiteAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_WHITENOISEGENERATORADAPTERINTERFACE_H_
#define INCLUDE_WHITENOISEGENERATORADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class WhiteNoiseGeneratorAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~WhiteNoiseGeneratorAdapterInterface();
	virtual void amplitude(float n)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_WHITENOISEGENERATORADAPTERINTERFACE_H_ */

