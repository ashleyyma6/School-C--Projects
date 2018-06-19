#pragma once
#include<iostream>
using namespace std;
class Packet {
public:

	//construct Packet
	Packet();
	Packet(int _targetID, int _sourceID, string _data);

	//setter
	void setTargetID(int _targetID);
	void setSourceID(int _sourceID);
	void setData(string _data);

	//getter
	int getTargetID();
	int getSourceID();
	string getData();

private:
	int targetID;
	int sourceID;
	string data;
};
