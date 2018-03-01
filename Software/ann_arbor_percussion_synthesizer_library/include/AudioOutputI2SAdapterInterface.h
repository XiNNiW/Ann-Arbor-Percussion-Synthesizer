/*
 * AudioOutputI2SAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef AUDIOOUTPUTI2SADAPTERINTERFACE_H_
#define AUDIOOUTPUTI2SADAPTERINTERFACE_H_

namespace AnnArborPercussion {

class AudioOutputI2SAdapterInterface {
public:
	virtual ~AudioOutputI2SAdapterInterface(){};
	virtual void update(void)=0;
	virtual void begin(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* AUDIOOUTPUTI2SADAPTERINTERFACE_H_ */
