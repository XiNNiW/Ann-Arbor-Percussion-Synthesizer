/*
 * TeensyAudioConnection.cpp
 *
 *  Created on: Mar 10, 2018
 *      Author: xinniw
 */

#include <TeensyAudioConnection.h>
#include <Audio.h>

namespace AnnArborPercussion {

TeensyAudioConnection::TeensyAudioConnection(AudioStreamAdapterInterface* source, AudioStreamAdapterInterface* destination) {
	//how do i create a connection with the wrapped objects???
	this->connection = NULL;
}

TeensyAudioConnection::TeensyAudioConnection(AudioStreamAdapterInterface* source, int outputChannel, AudioStreamAdapterInterface* destination, int inputChannel){
	this->connection = NULL;
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
