#include "stdafx.h"
#include<iostream>
#include"NetworkObject.h"
#include"Packet.h"
#include "stdlib.h" 
#include <vector>

/*Object operation*/
/*Constructor*/
NetworkObject::NetworkObject() {
}
NetworkObject::NetworkObject(int _objectId) {
	objectId = _objectId;
}
/*Id setter*/
void NetworkObject::setObjectId(int _objectId) {
	objectId = _objectId;
}

/*Id getter*/
int NetworkObject::getObjectId() {
	return objectId;
}
/*Obeject operation closed*/


//Add an array of packet objects to the packets queue
void NetworkObject::addPackets(vector<Packet*> _packetsArr)
{
	for (int i = 0; i < (int)_packetsArr.size() ; i++) {
		packets.push(_packetsArr[i]);
	}
	_packetsArr.clear();
}

int NetworkObject::getPackets()
{
	return packets.size();
}

//remove all packets, add to next objects's packets queue
void NetworkObject::update()
{
	/*If there is no next Node*/
	if (next == NULL) {
		while (!this->packets.empty()) {
			this->packets.pop();
			this->numOfPackets++;
		}
	}

	while (!packets.empty()) {
		int PacketLoss = rand() % 100 + 1;
		//less than probability, then do not pass
		if (PacketLoss < this->probabilityOfPacketLoss) {
			this->packets.pop();
			this->numOfPackets++;
			this->DroppedPackets++;
		}
		else {
			if ((int)(next->packets.size())<(int)(this->​maxPackets)) {
				next->packets.push(packets.front());
				this->numOfPackets++;
				this->TraveledPackets++;
			}
			else {
				this->DroppedPackets++;
				this->numOfPackets++;
			}
			this->packets.pop();
		}
	}
}
//Packets operations closed

