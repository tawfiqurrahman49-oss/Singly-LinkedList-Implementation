#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"
/*
==========================================================
Class: LinkedList
Purpose:
	Maintains a singly linked list of employees.
Data Member:
	head - pointer to the first node in the list (nullptr if empty)
Public Operations (client accessible):
	insert  - inserts a node at the end of the list
	remove  - deletes the first node in the list
	display - displays the list using the recursive print helper
	clear   - deletes every node in the list
Private Helper:
	print   - recursive function that prints nodes last to first
==========================================================
*/

class LinkedList
{
private:
	Node *head;
	/*
==========================================================
Function: print (Recursive Helper)
Purpose: Recursively prints the list from last to first.
Parameters:
	list - pointer to the current node.
Precondition: list may be nullptr.
Postcondition:
	All nodes are printed in reverse order.
==========================================================
*/
	void print(Node *list) const;

public:
	/*
	==========================================================
	Constructor
	Purpose: Initializes an empty linked list.
	Precondition: None.
	Postcondition: head is set to nullptr.
	==========================================================
	*/
	LinkedList();
	/*
==========================================================
Function: insert
Purpose: Inserts a new node at the end of the list.
Parameters:
	emp_num  - employee number (positive integer)
	year     - years on the job (short positive integer)
	salary   - yearly salary (float)
Precondition: Parameters contain valid employee data.
Postcondition: A new node is added at the end of the list.
==========================================================
*/
	void insert(const int &emp_num, const short int &year, const float &salary);
	/*
	==========================================================
	Function: remove
	Purpose: Removes the first node from the list.
	Precondition: The list may be empty.
	Postcondition:
		If the list is not empty, the first node is deleted
		and head points to the next node.
	==========================================================
	*/
	void remove();
	/*
	==========================================================
	Function: display
	Purpose: Displays the entire list by calling print.
	Precondition: None.
	Postcondition:
		If the list is empty, a message is displayed.
		Otherwise, all nodes are printed.
	==========================================================
	*/
	void display() const;
	/*
	==========================================================
	Function: clear
	Purpose: Deletes all nodes from the list.
	Precondition: None.
	Postcondition:
		All nodes are deleted and head becomes nullptr.
	==========================================================
	*/
	void clear();
};

#endif
