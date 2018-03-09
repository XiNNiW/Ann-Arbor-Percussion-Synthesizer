/*
 * AudioFilterStateVariableAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOFILTERSTATEVARIABLEADAPTERINTERFACE_H_
#define INCLUDE_AUDIOFILTERSTATEVARIABLEADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class AudioFilterStateVariableAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~AudioFilterStateVariableAdapterInterface();
	virtual void frequency(float freq)=0;
	virtual void resonance(float q)=0;
	virtual void octaveControl(float n)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOFILTERSTATEVARIABLEADAPTERINTERFACE_H_ */

