/*
	Name : Tawfiqur Rahman
	Class : CIS 260 ME1
	Date : 02/25/2026
	project name : Project 2
	Description : This project implements a singly linked list to manage employee data. It allows users to insert
	new employee records, remove the first record, display the list in reverse order,
	and clear the entire list. The program uses a menu-driven interface for user interaction and d
	emonstrates the use of recursion for displaying the list. The LinkedList class manages the linked list
	operations, while the Node class represents individual employee records.
*/
#include <iostream>
#include "LinkedList.h"

using namespace std;

/*
==========================================================
Function: menu
Purpose:
	Displays a menu of options for the user and
	calls the appropriate LinkedList member functions
	based on the user's choice.
Parameter:
	list - reference to a LinkedList object.
Precondition:
	list must be a valid LinkedList object.
Postcondition:
	User-selected operations are performed until
	the user chooses to exit.
==========================================================
*/
void menu(LinkedList &list);

/*
==========================================================
Function: main
Purpose:
	Entry point of the program.
	Creates a LinkedList object and calls the menu function.
Precondition:
	None.
Postcondition:
	Program runs until the user selects Exit.
==========================================================
*/
int main()
{
	LinkedList lists;
	menu(lists);

	return 0;
}

void menu(LinkedList &list) /// Function to display the menu and handle user input for LinkedList operations
{
	int choices = 0; // Variable to store the user's menu choice

	do // Loop to continuously display the menu until the user chooses to exit
	{
		cout << "Employee List - Menue" << endl;									 // Display the menu options to the user
		cout << "Insert the corresponding number with the options to begin" << endl; // Prompt the user to enter their choice
		cout << "1) Insert Employee Data" << endl;									 // Option to insert new employee data into the linked list
		cout << "2) Remove First Employee Data" << endl;							 // Option to remove the first employee data from the linked list
		cout << "3) Display Employee List" << endl;									 // Option to display the current employee list in reverse order
		cout << "4) Delete Employee List" << endl;									 // Option to clear the entire employee list, deleting all nodes
		cout << "5) Exit the program" << endl;										 // Option to exit the program

		cin >> choices; // Read the user's choice from standard input

		switch (choices) // Switch statement to handle the user's menu choice and call the corresponding LinkedList member function
		{
		case 1:				 // Case for inserting new employee data into the linked list
			int em_number;	 // Variable to store the employee number entered by the user
			short int years; // Variable to store the years on the job entered by the user
			float salary;	 // Variable to store the yearly salary entered by the user

			cout << "Enter Employee Number" << endl; // Prompt the user to enter the employee number
			cin >> em_number;						 // Read the employee number from standard input

			cout << "Enter Employee Year" << endl; // Prompt the user to enter the years on the job
			cin >> years;						   // Read the years on the job from standard input

			cout << "Enter Employee Salary" << endl; // Prompt the user to enter the yearly salary
			cin >> salary;							 // Read the yearly salary from standard input

			list.insert(em_number, years, salary); // Call the insert function of the LinkedList object to add the new employee data to the list
			break;
		case 2:
			list.remove(); // Call the remove function of the LinkedList object to delete the first employee data from the list
			break;
		case 3:
			list.display(); // Call the display function of the LinkedList object to print the current employee list in reverse order
			break;
		case 4:
			list.clear(); // Call the clear function of the LinkedList object to delete all employee data from the list, effectively clearing it
			break;
		case 5:
			cout << "Exiting the program" << endl; // Inform the user that the program is exiting
			break;
		default:
			cout << "Invalid choice" << endl; // Handle invalid menu choices by informing the user and prompting them to enter a valid option
			break;
		}

	} while (choices != 5); // Continue displaying the menu and handling user input until the user selects option 5 to exit the program
}