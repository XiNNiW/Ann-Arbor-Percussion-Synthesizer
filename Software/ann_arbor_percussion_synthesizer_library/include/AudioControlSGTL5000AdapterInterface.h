/*
 * AudioControlSGTL5000AdapterInterface.h
 *
 *  Created on: Mar 2, 2018
 *      Author: xinniw
 */

#ifndef INCLUDE_AUDIOCONTROLSGTL5000ADAPTERINTERFACE_H_
#define INCLUDE_AUDIOCONTROLSGTL5000ADAPTERINTERFACE_H_
#include <AudioControlAdapterInterface.h>
namespace AnnArborPercussion {

class AudioControlSGTL5000AdapterInterface : public AudioControlAdapterInterface {
public:
	virtual ~AudioControlSGTL5000AdapterInterface(){};
	virtual void setAddress(unsigned int level)=0; //uint8_t
	virtual bool enable(void)=0;
	virtual bool disable(void)=0;
	virtual bool volume(float n)=0;
	virtual bool inputLevel(float n)=0;
	virtual bool muteHeadphone(void)=0;
	virtual bool unmuteHeadphone(void)=0;
	virtual bool muteLineout(void)=0;
	virtual bool unmuteLineout(void)=0;
	virtual bool inputSelect(int n)=0;
	virtual bool volume(float left, float right)=0;
	virtual bool micGain(unsigned int dB)=0;
	virtual bool lineInLevel(unsigned int n)=0; //uint8_t
	virtual bool lineInLevel(unsigned int left, int right)=0; //uint8_t
	virtual unsigned short lineOutLevel(unsigned int n)=0; //uint8_t
	virtual unsigned short lineOutLevel(unsigned int left, unsigned int right)=0;//uint8_t
	virtual unsigned short dacVolume(float n)=0;
	virtual unsigned short dacVolume(float left, float right)=0;
	virtual bool dacVolumeRamp()=0;
	virtual bool dacVolumeRampLinear()=0;
	virtual bool dacVolumeRampDisable()=0;
	virtual unsigned short adcHighPassFilterEnable(void)=0;
	virtual unsigned short adcHighPassFilterFreeze(void)=0;
	virtual unsigned short adcHighPassFilterDisable(void)=0;
	virtual unsigned short audioPreProcessorEnable(void)=0;
	virtual unsigned short audioPostProcessorEnable(void)=0;
	virtual unsigned short audioProcessorDisable(void)=0;
	virtual unsigned short eqFilterCount(unsigned int n)=0; //uint8_t
	virtual unsigned short eqSelect(unsigned int n)=0; //uint8_t
	virtual unsigned short eqBand(unsigned int bandNum, float n)=0; //uint8_t
	virtual void eqBands(float bass, float mid_bass, float midrange, float mid_treble, float treble)=0;
	virtual void eqBands(float bass, float treble)=0;
	virtual void eqFilter(unsigned int filterNum, int *filterParameters)=0; //uint8_t
	virtual unsigned short autoVolumeControl(unsigned int maxGain, unsigned int lbiResponse, unsigned int hardLimit, float threshold, float attack, float decay)=0; //uint8_t
	virtual unsigned short autoVolumeEnable(void)=0;
	virtual unsigned short autoVolumeDisable(void)=0;
	virtual unsigned short enhanceBass(float lr_lev, float bass_lev)=0;
	virtual unsigned short enhanceBass(float lr_lev, float bass_lev, unsigned int hpf_bypass, unsigned int cutoff)=0; //uint8_t
	virtual unsigned short enhanceBassEnable(void)=0;
	virtual unsigned short enhanceBassDisable(void)=0;
	virtual unsigned short surroundSound(unsigned int width)=0; //uint8_t
	virtual unsigned short surroundSound(unsigned int width, unsigned int select)=0; //uint8_t
	virtual unsigned short surroundSoundEnable(void)=0;
	virtual unsigned short surroundSoundDisable(void)=0;
	virtual void killAutomation(void)=0;
};

} /* namespace AnnArborPercussion */

#endif /* INCLUDE_AUDIOCONTROLSGTL5000ADAPTERINTERFACE_H_ */
