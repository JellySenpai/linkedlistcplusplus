/*
Raymond Harding
5/19/2016
Linked Lists
*/

#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;

int getNumber();
int printMenu()
{
	
	
	cout << "Press 1 to add a new node" << endl;
	cout << endl;
	cout << "Press 2 to find a node with the data you enter" << endl;
	cout << endl;
	cout << "Press 3 to delete a node" << endl;
	cout << endl;
	cout << "Press 4 to find the smallest data node" << endl;
	cout << endl;
	cout << "Press 5 to find the largest data node" << endl;
	cout << endl;
	cout << "Press 6 to quit" << endl;
	cout << endl;
	return getNumber();


	
}
int getNumber()
{
	int num;
	cout << "Please enter a number" << endl;
	cin >> num;
	return num;
}
int main()
{
	LinkedList *list = new LinkedList();

	cout << "Welcome to Linked list." << endl;
	cout << endl;

	for (bool isRunning = true; isRunning;)
	{
		int choice = printMenu();
		switch (choice)
		{
		case 1:
			list->insert(getNumber());
			break;
		case 2:
			list->findNode(getNumber());
			break;

		case 3:
			list->deleteNode(getNumber());
			break;

		case 4:
			list->findMin(getNumber());
			break;
		case 5:
			list->findMax(getNumber());
			break;
		case 6:
			isRunning = false;
			return 0;
		default:
			cout << "This is not a choice" << endl;
		};
		list->printList();
	}

	system("pause");

	return 0;
}