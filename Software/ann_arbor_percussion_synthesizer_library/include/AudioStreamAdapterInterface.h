/*
 * AudioStreamAdapterInterface.h
 *
 *  Created on: Mar 2, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOSTREAMADAPTERINTERFACE_H_
#define INCLUDE_AUDIOSTREAMADAPTERINTERFACE_H_

namespace AnnArborPercussion {

class AudioStreamAdapterInterface {
public:
	virtual ~AudioStreamAdapterInterface()=0;
	virtual int processorUsage(void)=0;
	virtual int processorUsageMax(void)=0;
	virtual void processorUsageMaxReset(void)=0;
	virtual bool isActive(void)=0;
	virtual void update(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOSTREAMADAPTERINTERFACE_H_ */
