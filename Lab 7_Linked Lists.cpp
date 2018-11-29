/*
Author: Brianna Scott
Lab 7 - Linked Lists
October 30th, 2016
CSC 260L
*/

//preprocessor directives
#include <iostream>

//namespace statement
using namespace std;

//function prototypes
void firstNode();
void middleNode();
void lastNode();
void printNode();
int findNode(int find);

//linked list using a struct
struct nodeType
{
	int info; //stores integer values
	nodeType * link; //pointer address
};

//linked list nodes
	nodeType * newNode;
	nodeType * head;
	nodeType * current;
	nodeType * tail;

//variables
	int size;
	int item;
	int find;
	int i;

//main function
int main ()
{
	//prompt the user to enter items
	cout << "Enter the number of items to store in list: ";
	cin >> size;
	cout << endl;

	//call the functions
	//to create the head node
	firstNode();
	//to create middle nodes
	middleNode();
	//to create the tail node
	lastNode();
	//to transverse the linked list
	printNode();
	//to search the linked list
	findNode(find);
	//print "press any key to continue..." and wait for a key press
	system ("pause");
	//end the main function
	return 0;
}

//functions
void firstNode()
{
	newNode = new nodeType;
	cout << "Enter the first item: " << endl;
	cin >> item;
	cout << endl;

	newNode->info = item;

	tail = newNode;
	head = newNode;
}

void middleNode()
{
	for (i = 1; i < size - 1; i++)
	{
		newNode = new nodeType;
		cout << "Enter the next value: ";
		cin >> item;

		newNode->info = item;
		tail -> link = newNode;
		tail = tail -> link;
	}
}

void lastNode()
{
	newNode = new nodeType;
	cout << "Enter the last value: "<< endl;
	cin >> item;

	newNode->info = item;
	tail->link= newNode;
	newNode->link = NULL;
}

void printNode()
{
	cout << "The items in the linked list are: " << endl;
	while (head != NULL)
	{
		cout << head -> info << " " << endl;
		head = head -> link;
	}

}

int findNode(int find)
{
	int item;
	cout << "Enter a value to search the list: ";
	cin >> item;
	current = head;
	while (current != NULL)
	{
		if (current->info==item)
			cout << "The item is in the list." << endl;
		else
			cout << "The item is not in the list." << endl;
	}
	return find;
}