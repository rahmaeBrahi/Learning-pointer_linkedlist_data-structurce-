#include <iostream>
using namespace std;

class node {
public :
	int data;
	node* next;

};

class link {
public:
	node* head;
	link() {
		head = NULL;
	}
	bool isempty() {
		return (head == NULL);

	}
	void insertFirst(int newvalue) {
		node* newnode;
		newnode->data = newvalue;
		if (isempty()) {
			newnode->next = NULL;
			head = newnode;
		}

		else {
			newnode->next = head;
			head = newnode;


		}
	}
	void display() {
		node* temp = head;
		while (temp != NULL)
		{
			cout << temp->data << "";
			temp = temp->next;

		}



	}


};

