/*
 * TeensyStateVariableFilter.h
 *
 *  Created on: Mar 11, 2018
 *      Author: xinniw
 */

#ifndef SRC_TEENSYSTATEVARIABLEFILTER_H_
#define SRC_TEENSYSTATEVARIABLEFILTER_H_

#include <StateVariableFilterAdapterInterface.h>
#include <Audio.h>

namespace AnnArborPercussion {

class TeensyStateVariableFilter: public StateVariableFilterAdapterInterface {
public:
	TeensyStateVariableFilter();
	virtual ~TeensyStateVariableFilter();
	void frequency(float freq);
	void resonance(float q);
	void octaveControl(float n);
private:
	AudioFilterStateVariable* filter;
};

} /* namespace AnnArborPercussion */

#endif /* SRC_TEENSYSTATEVARIABLEFILTER_H_ */
