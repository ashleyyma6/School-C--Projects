#pragma once
#include"NetworkObject.h"
#include"stdafx.h"
class linkedList {
public:

	//NetworkObject *temp = NULL;
	NetworkObject * head = NULL;
	NetworkObject * tail = NULL;


	/*functions*/
	linkedList() {
	};
	void add_object(NetworkObject* object) {

		//temp->object = object;
		//temp->next = NULL;

		if (head == NULL) {
			head = object;
			tail = object;
			//temp = NULL;
		}
		else {
			tail->next = object;
			tail = tail->next;
			
		}
	}
};