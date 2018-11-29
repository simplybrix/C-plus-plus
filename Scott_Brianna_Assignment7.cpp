/*
Author: Brianna Scott
CSC 260
Dr. Mivule - Assignment 7
October 2nd, 2016
Purpose: This program showcases pointers.
*/

//preprocessor directives
#include <iostream>

//namespace statement
using namespace std;

//main function
int main ()
{
	//declare variables x, y , product and pointers p1 and p2
	int *p1, *p2, x, y, product;
	//declare what equals what
	p1 = & x;
	p2 = & y;
	product = x * y;
	//Input variables for x 
	cout << "Enter a value for x: ";
	cin >> * p1;
	cout << endl;
	// Input variables for y
	cout << "Enter a value for y: ";
	cin >> * p2;
	cout << endl;
	//print results
	//p1
	cout << "The memory address of p1 is: " << &p1 << endl;
	cout << "The value stored in p1 is: " << p1 << endl;
	//p2
	cout << "The memory address of p2 is: " << &p2 << endl;
	cout << "The value stored in p2 is: " << p2 << endl;
	//x
	cout << "The memory address of x is: " << &x << endl;
	cout << "The value stored in x is: " << x << endl;
	//y
	cout << "The memory address of y is: " << &y << endl;
	cout << "The value stored in y is: " << y << endl;
	//product
	cout << "The product is: " << product << endl;
	//print press any key to continue and wait for a key press
	system("pause");
	return 0;
}