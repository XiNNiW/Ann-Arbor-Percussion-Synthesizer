/*
 * AudioStreamAdapterInterface.h
 *
 *  Created on: Mar 2, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOSTREAMADAPTERINTERFACE_H_
#define INCLUDE_AUDIOSTREAMADAPTERINTERFACE_H_
#include <AudioConnectionAdapterInterface.h>

namespace AnnArborPercussion {

class AudioStreamAdapterInterface {
public:
	virtual ~AudioStreamAdapterInterface()=0;
//	virtual AudioConnectionAdapterInterface* connectTo(AudioStreamAdapterInterface* destination);
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOSTREAMADAPTERINTERFACE_H_ */
