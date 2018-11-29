/*
Author: Brianna Scott
Purpose: Write a function that accepts an array and the size of the array as parameters, prompts the user to enter 10 values one by one,
stores each input values in the array, prints each of the values in the array that is a multiple of 5 and how many values are a multiple, 
finds the smallest value in the array, and prints it on screen.
Date: April 13th, 2016
*/

//preprocessor directives
#include <iostream>

//namespace statement
using namespace std;

//function prototypes
void getData( int funcArray[]);
void printValues(int funcArray[], int size);
void calcSmallest(int funcArray[], int size);
void printSmallest(int smallest);

//main function
int main ()
{
	//declare an array called funcArray that can hold ten whole numbers
	int funcArray[10];
	//declare a variable named size that gets 10
	int size = 10;
	//call the functions
	getData(funcArray);
	printValues(funcArray, size);
	calcSmallest(funcArray, size);
	//Print "Press any key to continue..." and a line break
	system("pause");
	//end of main function
	return 0;
}

//getData function
void getData( int funcArray[])
{
	//Prompt the user to "Enter 10 different numbers: "
	cout << "Enter 10 different numbers: ";
	//wait for input and store in funcArray
	for (int i = 0; i < 10; i++)
		cin >> funcArray[i];
}

//printValues function
void printValues(int funcArray[], int size)
{
	//declare and initialize count = 0
	int count = 0;
	//for each element in the array
	for (int i = 0; i < size; i++){
	//check to see if the current element is a multiple of 5
	if (funcArray[i] % 5 == 0){
		//if yes, print the current element
		cout << "A multiple of 5 in the array is: ";
		cout << funcArray[i] << endl;
		//increment count by one
		count++; }
	}
	//print count on screen
	cout << "The number of values that are multiples of 5 are: " << count << endl;
}

//calcSmallest Function
void calcSmallest(int funcArray[], int size)
{
	//Declare and initialize smallest = 3
	int smallest = 3;
	//for each element in the array
	for(int i = 0; i < size; i++){
		//check to see if the current element is smaller than smallest
		if (funcArray[i] < smallest){
			//if yes, set smallest to current element
			smallest = funcArray[i];
		}
	}
	printSmallest(smallest);
}

//printSmallest Function
void printSmallest(int smallest)
{
	//Print "The smallest value in the array is:", smallest, and a line break
	cout << "The smallest value in the array is: " << smallest << endl;
}
