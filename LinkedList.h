/*
Raymond Harding
5/19/2016
Linked Lists
*/

#include <iostream>
#include <string>
using namespace std;
 struct node
{
	int data;
	node * next;
};
class LinkedList
{
private: 
	node *head= NULL;
public:
	LinkedList();
	void insert(int data);

	void findNode(int data);

	void deleteNode(int data);

	void findMin(int data);

	void findMax(int data);
	
	void printList();
};


