#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
	head = nullptr; // Initialize head to nullptr to represent an empty list
}

void LinkedList::insert(const int &emp_num, const short int &year, const float &salary)
{
	Node *newNode = new Node(emp_num, year, salary); // Create a new node with the provided employee data
	if (head == nullptr)
	{
		head = newNode; // If the list is empty, set head to the new node
		return;
	}
	Node *last = head;
	while (last->getNext() != nullptr)
	{							// Traverse to the end of the list
		last = last->getNext(); // Move to the next node
	}
	last->setNext(newNode); // Set the next pointer of the last node to the new node, adding it to the end of the list
}

void LinkedList::remove()
{
	if (head == nullptr)
	{
		std::cout << "The list is already empty" << std::endl; // Inform the user that the list is empty and there is nothing to remove
		return;												   // Exit the function since there are no nodes to remove
	}

	else
	{
		Node *temp = head;		// Store the current head node in a temporary pointer to delete it later
		head = head->getNext(); // Move head to the next node, effectively removing the first node from the list
		delete temp;			// Delete the old head node to free memory
	}
}

void LinkedList::print(Node *list) const
{
	if (list == nullptr)
	{ // Base case: if the current node is nullptr, return from the function
		return;
	}

	else
	{
		print(list->getNext()); // Recursive call to print the next node first, ensuring that the list is printed in reverse order
		std::cout << "Employee Number: " << list->getEmployeeNumber() << std::endl;
		std::cout << "Employee Year: " << list->getYears() << std::endl;
		std::cout << "Employee Salary: " << list->getSalary() << std::endl;
	}
}

void LinkedList::display() const
{
	if (head == nullptr)
	{											   // Check if the list is empty by verifying if head is nullptr
		std::cout << "List is empty" << std::endl; // Inform the user that the list is empty and there are no nodes to display
		return;
	}
	else
	{
		print(head); // Call the recursive print function starting from the head of the list to display all nodes
	}
}

void LinkedList::clear()
{
	while (head != nullptr)
	{			  // Loop until the list is empty (head becomes nullptr)
		remove(); // Call the remove function to delete the first node repeatedly until the list is empty
	}
}