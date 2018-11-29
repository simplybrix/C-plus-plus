/*
Author: Brianna Scott
Date: March 24th, 2016
Purpose: Create a function that gets the amount of apples, oranges, and bananas in pounds, calculates the tax and subtotal, and prints them
*/

//preprocessor directives
#include <iostream>
#include <string>

//namespace statement
using namespace std;

//function protoypes
void getData( float & apples, float & bananas, float & oranges);
void calcData(float & subtotal, float & tax, float & total, float apples, float bananas, float oranges);
void printResults( float subtotal, float total);

//main function
int main ()
{
	//create variables called orange, apples, bananas, subtotal, total and tax that can hold small decimals
	float oranges, apples, bananas, subtotal, total, tax;
	//call the functions
	getData(apples, bananas, oranges);
	calcData(subtotal, tax, total, apples, bananas, oranges);
	printResults(subtotal, total);
	//Print "Press any key to continue..." and wait for a key press
	system ("pause");
	//end the main function
	return 0;
}

//getData function
void getData( float & apples, float & bananas, float & oranges)
{
	//Prompt the user to "Enter the amount of apples in pounds"
	cout << "Enter the amount of apples in pounds: ";
	//wait for input and store in apples
	cin >> apples;
	//Prompt the user to "Enter the amount of bananas in pounds"
	cout << "Enter the amount of bananas in pounds: ";
	//wait for input and store in bananas
	cin >> bananas;
	//Prompt the user to "Enter the amount of oranges in pounds"
	cout << "Enter the amount of oranges in pounds: ";
	//wait for input and store in oranges
	cin >> oranges;
}

//calcData function
void calcData(float & subtotal, float & tax, float & total, float apples, float bananas, float oranges)
{
	//Calculate the subtotal as subtotal = apples * 1.99 + bananas * 1.35 + oranges * 0.85
	subtotal = apples * 1.99 + bananas * 1.35 + oranges * 0.85;
	//Calculate the tax as tax = subtotal * 0.045
	tax = subtotal * 0.045;
	//Calculate the total as total = subtotal + tax
	total = subtotal + tax;
}

//printResults function
void printResults( float subtotal, float total)
{
	//Print "The subtotal is: ", subtotal, and a line break
	cout << "The subtotal is: " << subtotal << endl;
	//Print "The total is: ", total, and a line break
	cout << "The total is: " << total << endl;
}