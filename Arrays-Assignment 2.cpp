/*
Author: Brianna Scott
Date: September 5, 2016
Class: CSC 260 - Dr. Mivule
Purpose: This program is about arrays.
*/

//preprocessor directives
#include <iostream>
#include <iomanip>

//namespace statement
using namespace std;

//main function
int main()
{
	//declare an int & double variables for sum, average, largestSale, maxIndex, and index
	int sum, largestSale, maxIndex, size, index;
	double average;
	cout << fixed << showpoint << setprecision (2) << endl;
	//declare int variable locations for the Array carSales
	int carSales[7] = {2,4,9,1,7,8,5};
	//calculate the sum of all of the car sales for the week
	sum = carSales[0] + carSales[1] + carSales[2] + carSales[3] + carSales[4] + carSales[5] + carSales[6];
	//calculate the average of all of the car sales for the week
	average = sum / 7;
	//calculate the largest car size of the week
	maxIndex = 0;
	for (index = 1; index < 7; index++)
		maxIndex = index;
	largestSale = carSales[maxIndex];
		//print "The average car sales for the week is:" on screen, print average, and end line
	cout << "The average car sales for the week is: " << average << endl;
	//print "The largest car sale for the week was:" on screen, print largestSale, and end line
	cout <<"The largest car sale for the week was: " << largestSale << endl;
	//print "Press any key to continue..." and wait for a key press
	system("pause");
	//end the main function
	return 0;
}
