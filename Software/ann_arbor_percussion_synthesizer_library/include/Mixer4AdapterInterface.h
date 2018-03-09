/*
 * AudioMixer4.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_MIXER4ADAPTERINTERFACE_H_
#define INCLUDE_MIXER4ADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class Mixer4AdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~Mixer4AdapterInterface();
	virtual void update(void)=0;
	virtual void gain(unsigned int channel, float gain)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_MIXER4ADAPTERINTERFACE_H_ */

