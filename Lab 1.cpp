/*
Author: Brianna Scott
Date: September 5, 2016
CSC 260L - Dr. Mivule
*/

//preprocessor directives
#include <iostream>

//namespace statement
using namespace std;

//function prototypes
void getData(int &num1, int &num2);
void calcProduct(int &product, int num1, int num2);
void printResults(int product);

//main function
int main()
{
	//declare the int variables for num1, num2, and product
	int num1, num2, product;
	//call the functions
	getData(num1,num2);
	calcProduct(product, num1, num2);
	printResults(product);
	//Print "Press any key to continue..." and wait for a line break
	system("pause");
	//end the main function
	return 0;
}

//getData function
void getData(int &num1, int &num2)
{
	//print "Enter a number: " and wait for input
	cout << "Enter a number: ";
	// wait for input and store in num1
	cin >> num1;
	//end line
	cout << endl;
	//print "Enter a number: " and wait for input
	cout << "Enter a number: ";
	//wait for input and store in num2
	cin >> num2;
	//end line
	cout << endl;
}

//calcProduct Function
void calcProduct(int & product, int num1, int num2)
{
	//calculate the product of the two numbers
	product = num1 * num2;
}

//printResults function
void printResults( int product)
{
	//print "The product of the two numbers is: ", the product, and end the line
	cout << "The product of the two numbers is: " << product << endl;
}
