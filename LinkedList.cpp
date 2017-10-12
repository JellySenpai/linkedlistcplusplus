/*
Raymond Harding
5/19/2016
Linked Lists
*/

#include <iostream>
#include <string>
#include "LinkedList.h"
using namespace std;
LinkedList::LinkedList(){}


	
void LinkedList::insert(int data)
	{
		node *temp;
		temp = new node;
		temp->next = NULL;
		temp->data = data;
		if (head == NULL)
		{
			head = temp;
		}
		else
		{
			node *current = head;
			while (current->next != NULL)
				current = current->next;
			current->next = temp;
		}
	}
void LinkedList:: findNode(int data)
	{
		
	
	}
void LinkedList:: deleteNode(int data)
	{
		int node_number;
		node *temp1;
		temp1 = new node;
		temp1 = head;
		node *old_Temp;
		old_Temp = new node;
		old_Temp = temp1;

		cout << "Enter the number you want to delete" << endl;
		cin >> node_number;
		for (int i = 1; i < node_number; i++)
		{
			old_Temp = temp1;
			temp1 = temp1->next;
		}
		old_Temp->next = temp1->next;
		free(temp1);
	}
void LinkedList:: findMin(int data)
	{
		node *current = head;
		current->data;
		int lowestNumber = 100;
		while (&current != NULL)
		{
			//if (&current < lowestNumber)
			//{/
				//current = lowestNumber;
			//}
			cout << "The lowest number is " << lowestNumber << endl;
		}
	}
void LinkedList:: findMax(int data)
	{
		node *current = head;
		current->data;
		int highestNumber= -1;
		while (current != NULL)
		{
			//if (&current < highestNumber)
			//{
				//current = highestNumber;
			//}
			cout << "The highest number is " << highestNumber <<endl;
		}
	}
void LinkedList::printList()
{
	node *current= head;
	
	while (current != NULL)
	{
		cout << "Your current list of nodes and their are " << current->data << endl;
		cout << endl;
		cout << endl;
		current = current->next;
	}
}







