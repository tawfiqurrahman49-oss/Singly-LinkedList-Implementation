#ifndef NODE_H
#define NODE_H

/*
==========================================================
Class: Node
Purpose:
	Represents a single employee in the linked list.
Data Members:
	employee_number - employee ID (positive integer)
	years           - years on the job (short integer)
	salary          - yearly salary (float)
	next            - pointer to the next node in the list
==========================================================
*/
class Node
{
private:
	int employee_number;
	short int years;
	float salary;

	Node *next;

public:
	/*
	   ==========================================================
	   Constructor
	   Purpose:
		   Initializes a Node with employee data.
	   Parameters:
		   employee_number - employee ID
		   years           - years on the job
		   salary          - yearly salary
	   Postcondition:
		   Data members are initialized and next is set to nullptr.
	   ==========================================================
	   */
	Node(const int &employee_number, const short int &years, const float &salary);
	/*
==========================================================
Function: setNext
Purpose:
	Sets the pointer to the next node.
Parameter:
	nextNode - pointer to another Node
Postcondition:
	next is updated to point to nextNode.
==========================================================
*/
	void setNext(Node *head);
	/*
   ==========================================================
   Function: getNext
   Purpose:
	   Returns the pointer to the next node.
   Returns:
	   Pointer to the next Node.
   ==========================================================
   */
	Node *getNext() const;
	/*
   ==========================================================
   Function: getEmployeeNumber
   Purpose: Returns the employee number.
   ==========================================================
   */
	int getEmployeeNumber() const;
	/*
   ==========================================================
   Function: getYears
   Purpose: Returns the years on the job.
   ==========================================================
   */
	short int getYears() const;
	/*
   ==========================================================
   Function: getSalary
   Purpose: Returns the employee salary.
   ==========================================================
   */
	float getSalary() const;
};

#endif
