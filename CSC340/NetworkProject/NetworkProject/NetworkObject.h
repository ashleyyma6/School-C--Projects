#pragma once
#include"stdafx.h"
#include <queue> 
#include"Packet.h"
#include"stdlib.h"

class NetworkObject {
public:
	
	/*Object Operations*/
	NetworkObject();
	NetworkObject(int _objectId);
	void setObjectId(int _objectId);
	int getObjectId();
	
	
	/*Packets Operations*/
	int probabilityOfPacketLoss = rand() % 100;
	int ​maxPackets = rand() % 10 + 1;
	NetworkObject *next;

	void addPackets(vector<Packet*> _packetsArr);
	int getPackets();
	void update();

	int numOfPackets = 0;
	int TraveledPackets =0;
	int DroppedPackets=0;

private:
	std::queue<Packet*> packets;
	int objectId;
};