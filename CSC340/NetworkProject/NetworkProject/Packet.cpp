#include<iostream>
#include"stdafx.h"
#include"Packet.h"

//constructor
Packet::Packet() {}
Packet::Packet(int _targetID, int _sourceID, string _data) {
	targetID = _targetID;
	sourceID = _sourceID;
	data = _data;
}

//setter
void Packet::setTargetID(int _targetID) {
	targetID = _targetID;
}
void Packet::setSourceID(int _sourceID) {
	sourceID = _sourceID;
}
void Packet::setData(string _data) {
	data = _data;
}

//getter
int Packet::getTargetID() {
	return targetID;
}
int Packet::getSourceID() {
	return sourceID;
}
string Packet::getData() {
	return data;
}


