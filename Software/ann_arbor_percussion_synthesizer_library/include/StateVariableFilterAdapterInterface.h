/*
 * AudioFilterStateVariableAdapterInterface.h
 *
 *  Created on: Mar 1, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_STATEVARIABLEFILTERADAPTERINTERFACE_H_
#define INCLUDE_STATEVARIABLEFILTERADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class StateVariableFilterAdapterInterface: public AudioStreamAdapterInterface {
public:
	virtual ~StateVariableFilterAdapterInterface();
	virtual void frequency(float freq)=0;
	virtual void resonance(float q)=0;
	virtual void octaveControl(float n)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_STATEVARIABLEFILTERADAPTERINTERFACE_H_ */

