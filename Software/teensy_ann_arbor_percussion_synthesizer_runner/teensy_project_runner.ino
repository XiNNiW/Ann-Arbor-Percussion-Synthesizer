#include <Audio.h>
#include <AnnArborPercussionSynthesizer.h>
#include <AnnArborPercussionControlsFactory.h>
#include <TeensyPlatformProvider.h>

using AnnArborPercussion::AnnArborPercussionControlsFactory;
using AnnArborPercussion::AnnArborPercussionSynthesizer;

AnnArborPercussionSynthesizer* annArborPercussionSynthesizer;

void setup()
{
	TeensyPlatformProvider* platformProvider = new TeensyPlatformProvider();
	AnnArborPercussionControlsFactory* controlsFactory = new AnnArborPercussionControlsFactory();
	annArborPercussionSynthesizer = new AnnArborPercussionSynthesizer(platformProvider,controlsFactory);
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
