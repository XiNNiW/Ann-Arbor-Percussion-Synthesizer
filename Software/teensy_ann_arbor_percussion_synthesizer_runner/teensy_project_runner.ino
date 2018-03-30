#include <Audio.h>
#include <AudioStreamAdapterInterface.h>
#include <AnnArborPercussionSynthesizer.h>
#include <AnnArborPercussionSynthesizerArchitecture.h>
#include <AnnArborPercussionControlsFactory.h>
#include <TeensyPlatformProvider.h>
#include <TeensyAudioLibraryProvider.h>
#include <TeensySimpleDrum.h>

using AnnArborPercussion::AnnArborPercussionControlsFactory;
using AnnArborPercussion::AnnArborPercussionSynthesizer;
using AnnArborPercussion::AnnArborPercussionSynthesizerArchitecture;
using AnnArborPercussion::TeensyAudioLibraryProvider;
using AnnArborPercussion::TeensySimpleDrum;
using AnnArborPercussion::AudioStreamAdapterInterface;
using AnnArborPercussion::TeensyAudioStream;


AnnArborPercussionSynthesizer* annArborPercussionSynthesizer;

AudioControlSGTL5000 codec;

extern unsigned long _estack;
uint32_t FreeRam() { // for Teensy 3.0
    uint32_t heapTop;
    void* foo = malloc(1);
    heapTop = (uint32_t) foo;
    free(foo);
    return (unsigned long)&_estack - heapTop;
}

void setup()
{
	Serial.begin(9600);
	delay(5000);
	Serial.println("i turned on!");

	AudioMemory(100);
	Serial.println("memory!");
	codec.enable();
	Serial.println("codec!");
	codec.volume(.4); //0-1. crank it. We'll control volume per drum channel with the mixers.
	Serial.println("volume!");
	AudioNoInterrupts();
	Serial.println("turn off interrupts!");

	TeensyAudioLibraryProvider* teensyAudioLibraryProvider = new TeensyAudioLibraryProvider();
	Serial.println("lib provider!");
	AnnArborPercussionSynthesizerArchitecture* architecture =
			new AnnArborPercussionSynthesizerArchitecture(
					teensyAudioLibraryProvider);
	Serial.println("create architecture!");
	TeensyPlatformProvider* platformProvider = new TeensyPlatformProvider();
	Serial.println("platform provider!");
	AnnArborPercussionControlsFactory* controlsFactory = new AnnArborPercussionControlsFactory();
	Serial.println("controls factory!");
	annArborPercussionSynthesizer = new AnnArborPercussionSynthesizer(platformProvider,controlsFactory,architecture);
	Serial.println("synthesis");

	AudioInterrupts();
	Serial.println("Interrupts on");
}

void loop()
{
	Serial.print(F("free: "));
	Serial.println(FreeRam());//Serial.println();
//	Serial.println(String(annArborPercussionSynthesizer->getDrumLength()));
//	Serial.println(String(annArborPercussionSynthesizer->getDrumFrequency()));
//	Serial.println(String(annArborPercussionSynthesizer->getDrumMod()));
//	Serial.println(String(annArborPercussionSynthesizer->getDrumMotion()));
//	Serial.println(String(annArborPercussionSynthesizer->getDrumTeeth()));

	delay(1000);
}
