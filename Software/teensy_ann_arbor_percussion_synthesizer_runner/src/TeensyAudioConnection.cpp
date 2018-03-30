/*
 * TeensyAudioConnection.cpp
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#include <TeensyAudioConnection.h>
#include <TeensyAudioStream.h>
#include <Audio.h>

namespace AnnArborPercussion {

TeensyAudioConnection::TeensyAudioConnection(AudioStreamAdapterInterface* source, AudioStreamAdapterInterface* destination) {
	TeensyAudioStream* sourceStream = (TeensyAudioStream*) source;
	TeensyAudioStream* destinationStream = (TeensyAudioStream*) destination;
	AudioStream& srcStream = *sourceStream->getStream();
	AudioStream& destStream = *destinationStream->getStream();
	Serial.println("src connections");
	if(srcStream.isActive()){
		Serial.println("active");
	}
	Serial.println("pre construction of connection");
	this->connection = new AudioConnection(srcStream,destStream);
	Serial.println("post construction of connection");
}

TeensyAudioConnection::TeensyAudioConnection(AudioStreamAdapterInterface* source, unsigned char outputChannel, AudioStreamAdapterInterface* destination, unsigned char inputChannel){
	TeensyAudioStream* sourceStream = (TeensyAudioStream*) source;
	TeensyAudioStream* destinationStream = (TeensyAudioStream*) destination;
	AudioStream& srcStream = *sourceStream->getStream();
	AudioStream& destStream = *destinationStream->getStream();
	Serial.println("pre construction of connection route");

	Serial.print("output channel:");
	Serial.println(outputChannel);
	Serial.print("input channel:");
	Serial.println(inputChannel);
	Serial.println("src connections");
	if(srcStream.isActive()){
		Serial.println("active");
	}
//	srcStream.
	Serial.println("pre construction of connection");
	this->connection = new AudioConnection(srcStream,outputChannel,destStream,inputChannel);
	Serial.println("post construction of connection");
}


TeensyAudioConnection::~TeensyAudioConnection() {
	// TODO Auto-generated destructor stub
}

void TeensyAudioConnection::connect(){
	this->connection->connect();
}

void TeensyAudioConnection::disconnect(){
	this->connection->disconnect();
}

} /* namespace AnnArborPercussion */
