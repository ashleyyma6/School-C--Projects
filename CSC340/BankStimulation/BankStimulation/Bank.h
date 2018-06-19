#pragma once
#include<iostream>
#include"stdafx.h"
#include <queue>
#include "Member.h"
#include <time.h> 

/*Bank, store money from its Members*/
class Bank{
public:

	Bank(int numOfMembers) {
		srand((unsigned)time(NULL));
		for (int i = 0; i < numOfMembers; i++) {
			//creat a queue of bank members
			Member newMember;
			Members.push(newMember);
		}
	};

	//transfer money into the bank, add to total
	void transaction () {
		while (!Members.empty()) {
			totalMoney += Members.front().getMoney();
			Members.pop();
		}
	};
	
	double getTotalMoney() {
		return totalMoney;
	};

private:
	//creat a queue of bank members
	std::queue<Member> Members;
	double totalMoney = 0;
	int numOfMembers = 0;
};