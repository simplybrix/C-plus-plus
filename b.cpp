/*
Author: Brianna M. Scott
Date: December 30th, 2015
Purpose: Create a function that reads three numbers and computes the sum and difference.
*/

#include <iostream>
#include <string>

void getData(double &num1, double &num2, double &num3);
void performComputations(double & sum, double & difference, double num1, double num2, double num3);
void printResults( double sum, double difference);

using namespace std;

int main()
{
	double num1;
	double num2;
	double num3;
	double sum;
	double difference;

	getData(num1,num2,num3);
	performComputations(sum, difference, num1, num2, num3);
	printResults(sum, difference);

	system ("pause");
	return 0;
}

//the getData function
void getData(double &num1, double &num2, double &num3)
{
	cout << "Enter a numerical value in place of num1: ";
	cin >> num1;
	cout << "Enter a numerical value in place of num2: ";
	cin >> num2;
	cout << "Enter a numerical value in place of num3: ";
	cin >> num3;
}

//the performComputations function
void performComputations(double & sum, double & difference, double num1, double num2, double num3)
{
	sum = num1 + num2 + num3;
	difference = num3 - num2 - num1;
}

//the printResults function
void printResults( double sum, double difference)
{
	cout << "The sum of the three numbers is " << sum << endl;
	cout << "The difference of the three numbers is " << difference << endl;
}