/*
 * AudioSynthWaveformSineAdapter.h
 *
 *  Created on: Feb 27, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOSYNTHWAVEFORMSINEADAPTERINTERFACE_H_
#define INCLUDE_AUDIOSYNTHWAVEFORMSINEADAPTERINTERFACE_H_

#include <AudioStreamAdapterInterface.h>
namespace AnnArborPercussion {

class AudioSynthWaveformSineAdapterInterface : public AudioStreamAdapterInterface {
public:
	virtual ~AudioSynthWaveformSineAdapterInterface(){};
	virtual void frequency(float freq)=0;
	virtual void phase(float angle)=0;
	virtual void amplitude(float n)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOSYNTHWAVEFORMSINEADAPTERINTERFACE_H_ */
