/*
 * AudioConnectionAdapter.h
 *
 *  Created on: Feb 27, 2018
 *      Author: xinniw
 */

#ifndef AUDIOCONNECTIONADAPTERINTERFACE_H_
#define AUDIOCONNECTIONADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>

namespace AnnArborPercussion {

class AudioConnectionAdapterInterface {
public:
	virtual ~AudioConnectionAdapterInterface(){};
	virtual void disconnect(void)=0;
	virtual void connect(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* AUDIOCONNECTIONADAPTERINTERFACE_H_ */
