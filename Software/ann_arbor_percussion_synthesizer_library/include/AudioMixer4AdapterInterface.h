/*
 * AudioMixer4.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOMIXER4ADAPTERINTERFACE_H_
#define INCLUDE_AUDIOMIXER4ADAPTERINTERFACE_H_

namespace AnnArborPercussion {

class AudioMixer4AdapterInterface {
public:
	virtual ~AudioMixer4AdapterInterface(){};
	virtual void update(void)=0;
	virtual void gain(unsigned int channel, float gain)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOMIXER4ADAPTERINTERFACE_H_ */
