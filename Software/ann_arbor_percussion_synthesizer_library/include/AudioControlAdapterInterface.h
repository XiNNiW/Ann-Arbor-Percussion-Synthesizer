/*
 * AudioContolAdapterInterface.h
 *
 *  Created on: Mar 2, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOCONTROLADAPTERINTERFACE_H_
#define INCLUDE_AUDIOCONTROLADAPTERINTERFACE_H_

namespace AnnArborPercussion {

class AudioControlAdapterInterface {
public:
	virtual ~AudioControlAdapterInterface()=0;
	virtual bool enable(void) = 0;
	virtual bool disable(void) = 0;
	virtual bool volume(float volume) = 0;      // volume 0.0 to 1.0
	virtual bool inputLevel(float volume) = 0;  // volume 0.0 to 1.0
	virtual bool inputSelect(int n) = 0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOCONTROLADAPTERINTERFACE_H_ */
