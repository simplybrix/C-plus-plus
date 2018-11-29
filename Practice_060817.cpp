/*
Author: Brianna Scott
Purpose: Create a practice version of a generic multiplication problem.
Date: June 8th, 2017
*/

//Preprocessor Directives
#include <iostream>
#include <iomanip>
#include <string>

//namespace statement
using namespace std;

//function prototypes
void getData(double &x, double &y);
void calcData(double &sum, double x, double y);
void printData(double sum); 

//main function
int main(){
	
	//declare double variables x,y, and sum to hold large decimals
	double x, y;
	double sum;
	//Call the functions 
	getData(x,y);
	calcData(sum,x,y);
	printData(sum);
	system("pause");
	return 0;
}

//getData Function
void getData(double &x, double &y){
	cout<< " Enter a number: ";
	cin >> x;
	cout << endl;
	cout << "Enter another number: " ;
	cin >> y;
	cout << endl;
}

//calcData Function
void calcData( double &sum, double x, double y){
	sum = x * y;
}

//printData Function
void printData(double sum){
	cout << "The sum of the two numbers entered is: " << sum << endl;
}