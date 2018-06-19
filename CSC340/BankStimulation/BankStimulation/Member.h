#pragma once
#include<iostream>
#include"stdafx.h"
#include<stdlib.h>

class Member {
public: 
	/*Member, store amount of money*/
	Member() {
		money = rand();
	}

	double getMoney() { 
		return money; 
	};

private:
	double money = 0;

};