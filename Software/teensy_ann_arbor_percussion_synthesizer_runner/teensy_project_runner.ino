#include <Audio.h>
#include <AnnArborPercussionSynthesizer.h>
#include <AnnArborPercussionSynthesizerArchitecture.h>
#include <AnnArborPercussionControlsFactory.h>
#include <TeensyPlatformProvider.h>
#include <TeensyAudioLibraryProvider.h>

using AnnArborPercussion::AnnArborPercussionControlsFactory;
using AnnArborPercussion::AnnArborPercussionSynthesizer;
using AnnArborPercussion::AnnArborPercussionSynthesizerArchitecture;
using AnnArborPercussion::TeensyAudioLibraryProvider;


AnnArborPercussionSynthesizer* annArborPercussionSynthesizer;
//AudioConnection stream;

void setup()
{
	TeensyPlatformProvider* platformProvider = new TeensyPlatformProvider();
	AnnArborPercussionControlsFactory* controlsFactory = new AnnArborPercussionControlsFactory();
	AnnArborPercussionSynthesizerArchitecture* architecture = new AnnArborPercussionSynthesizerArchitecture(new TeensyAudioLibraryProvider());
	annArborPercussionSynthesizer = new AnnArborPercussionSynthesizer(platformProvider,controlsFactory,architecture);
}

void loop()
{
	Serial.print("A2 synth params are...");
	Serial.println(String(annArborPercussionSynthesizer->getDrumLength()));
	Serial.println(String(annArborPercussionSynthesizer->getDrumFrequency()));
	Serial.println(String(annArborPercussionSynthesizer->getDrumMod()));
	Serial.println(String(annArborPercussionSynthesizer->getDrumMotion()));
	Serial.println(String(annArborPercussionSynthesizer->getDrumTeeth()));

	delay(1000);
}
