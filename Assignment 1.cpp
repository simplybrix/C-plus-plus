/*
Author: Brianna M. Scott
Date: August 24th, 2016
Class: CSC 260 - Dr. Mivule
Purpose: This program must get the power, absolute value, and square root using variables x & y.
This is an example of a predefined function.
*/

//preprocessor directives
#include <iostream>
#include <cmath>
#include <iomanip>

//function prototype
void allFunctions(int b, int c, double x, double y, double a);

//namespace statement
using namespace std;

//main function
int main ()
{
	cout << fixed <<showpoint << setprecision (2) << endl;
	//Declare double locations for x,y
	double x, y;
	//Prompt user to input the value x
	cout << "Enter a value for x: ";
	//Input a value and store in x
	cin >> x;
	//end line
	cout << endl;
	//Prompt user to input the value y
	cout << "Enter a value for y: ";
	//Input a value and store in y
	cin >> y;
	//end line
	cout << endl;
	//declare double and int locations for a, b, and c
	double a = pow (x, y);
	int b = sqrt(a);
	int c = abs(b);
	//Call the Functions
	allFunctions(b,c,x,y,a);
	//Print "Press any key to continue..." on screen and wait for key press
	system("pause");
	//End the main function
	return 0;
}

//The allFunctions Function
void allFunctions(int b, int c, double x, double y, double a)
{
	a = pow(x, y);
	b = sqrt(a);
	c = abs(b);
	//Calculate x raised to the power y and store them in variable a
	cout << x << " to the power of " << y << " = " << pow(x, y) << endl;
	//Calculate the square root of results stored in variable a and store them in a new variable b
	cout << "The square root is: " << sqrt(a) << endl;
	//Calculate the absolute value of results stored in variable b, store the results in a new variable c
	cout << "The absolute value is: " << abs(b) << endl;
	//Print the final results of the value in variable c
	cout << "The absolute value or variable c is: " << c << endl;
}
