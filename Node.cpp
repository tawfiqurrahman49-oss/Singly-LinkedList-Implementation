#include <iostream>
#include "Node.h"

Node::Node(const int &employee_number, const short int &years, const float &salary)
{											 // Constructor to initialize a Node with employee data
	this->employee_number = employee_number; // Set the employee number using the provided parameter
	this->years = years;					 // Set the years on the job using the provided parameter
	this->salary = salary;					 // Set the salary using the provided parameter

	next = nullptr; // Initialize the next pointer to nullptr, indicating that this node does not point to any other node yet
}
void Node::setNext(Node *head)
{				 // Function to set the pointer to the next node
	next = head; // Update the next pointer to point to the provided node (head), effectively linking this node to the next node in the list
}

Node *Node::getNext() const
{ // Function to return the pointer to the next node
	return next;
}

int Node::getEmployeeNumber() const
{
	return employee_number; // Return the employee number stored in this node
}

short int Node::getYears() const
{
	return years; // Return the years on the job stored in this node
}

float Node::getSalary() const
{				   // Function to return the employee salary stored in this node
	return salary; // Return the salary stored in this node
}