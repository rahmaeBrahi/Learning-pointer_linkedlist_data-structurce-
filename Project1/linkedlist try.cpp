//#include <iostream>
//using namespace std;
//class node {
//public:
//	int data;
//	node* next;
//};
//
//class linkedlist {
//public :
//	node* head;
//	linkedlist() {
//		head = NULL;
//	}
//	bool isempty() {
//		return(head == NULL);
//	 }
//
//	void insertfirst(int newvalue) {
//		node* newnode;
//		newnode->data = newvalue;
//		if (isempty()) {
//			newnode->next = NULL;
//			head = newnode;
//		}
//		else {
//			newnode->next = head;
//			head = newnode;
//
//		}
//	}
//	void display()
//	{
//		node* temp = head;
//		while (temp != NULL)
//		{
//			cout << temp->data << "";
//			temp = temp->next;
//		}
//	}
//			
//			
//		int count()
//		{
//			int c = 0;
//			node* temp = head;
//			while (temp != NULL)
//			{
//				c = c + 1;
//				temp = temp->next;
//			}
//
//			return c;
//
//
//		}
//
//
//	}
//};