/*
Author: Brianna Scott
Date: November 11th, 2016
Purpose: Lab 9 - Queues
*/

//preprocessor directives
#include <iostream>

//namespace statement
using namespace std;

const int size = 6;
class Queue
{
private:
	int Array[size];
	int top;
	int item;

public:
	Queue();
	bool isEmpty();
	bool isFull();
	int frontItem();
	int backItem();
	void addItem();
	void removeItem();
};

int front;
int back;
int count;
Queue Q;
Queue:: Queue()
{
	front = size - 1;
	back = 0;
	count = 0;
}

bool Queue :: isEmpty()
{
	return (count == 0);
}

bool Queue :: isFull()
{
	return (count == size);
}

int Queue :: frontItem()
{
	if (front == -1)
	{
		cout << "Queue is empty. " << endl;
		return -1;
	}
	cout << "The front is: " << Array[front] << endl;
	return Array[front];
}

int Queue :: backItem()
{
	if (back == -1)
	{
		cout << "Queue is empty. " << endl;
		return -1;
	}
	cout << "The back item is: " << Array[back] << endl;
	return Array[back];
}

void Queue :: addItem()
{
	if (! isFull() )
	{
		for (count = 0; count < size; ++count)
		{
			cout << "Enter a item: ";
			cin >> item;
			Array[back] = item;
		}
	}
	else
		cout << "The queue is full. " << endl;
}

void Queue :: removeItem()
{
	if ( ! isEmpty() )
	{
		for ( count = 0; count < size; count--)
		{
			cout << "The items in the queue are" << endl;
			cout << Array[front];
		}
	}
	else 
		cout << "Queue is empty" << endl;
	}

//main function
int main()
{
	int size = 6;
	int Array[6];
	int i;

	//implementation process
	for (i = 0; i < size; i++)
	{
		cout << "Enter a number: ";
		cin >> Array[i];
		cout << endl;
	}

	//print process
	cout << " First in, first out." << endl;
	cout << "The numbers in the queue are: ";
	cout << Array[0] << " " << Array[1] << " " << Array[2] << " " << Array[3] << " " << Array[4] << " " << Array[5] << endl;
	cout << "This is the end of the queue. " << endl;
	system ("pause");
	return 0;
}

