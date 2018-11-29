/*
Author: Brianna Scott
Date: November 10th, 2016
Purpose: Lab 8 - Stacks
*/

//preprocessor directives
#include <iostream>

//namespace statement
using namespace std;

const int SIZE = 4;
class Stack
{
private: 
	int Array[SIZE];
	int top;
	int item;

public:
	Stack() //constructor
	{
		top = -1;
	}
	bool isEmpty();
	bool isFull();
	void push();
	void pop();
	int size();
	int topItem();
};

//outside class implementation
bool Stack :: isEmpty()
{
	if (top == -1)
		return true;
	else 
		return false;
}

bool Stack :: isFull()
{
	if (top == SIZE - 1)
		return true;
	else
		return false;
}

void Stack :: push()
{
	if (top == SIZE - 1)
		cout << "Stack is full" << endl;
	else
		cout << "Enter item to store: ";
	cin >> item;
	Array[++top] = item;
}

void Stack :: pop()
{
	if (top == -1)
		cout << "Stack is empty." << endl;
	else
		item = Array[top--];
	for (int i = top; i > 0; i--)
	{
		cout << Array[i] << endl;
	}
}

int Stack :: size()
{
	return SIZE;
}

int Stack :: topItem()
{
	return top;
}

//main function
int main()
{
	int SIZE = 4;
	int Array[4];
	int i;

	//implementation process
	for (i = 0; i < SIZE; i++)
	{
		cout << "Enter a number: ";
		cin >> Array[i];
		cout << endl;
	}

	//print process
	cout << "Last in, First out." << endl;
	cout << "The numbers in the stack are: ";
	cout << Array[3] << " " << Array[2] << " " << Array[1] << " " << Array[0] << endl;
	cout << "This is the end of the stack." << endl;
	system ("pause");
	return 0;
}
