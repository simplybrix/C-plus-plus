/*
Author: Brianna Scott
Date: September 1, 2016
Lab 2
*/

//preprocessor directives
#include <iostream>
#include <iomanip>

//namespace statement
using namespace std;

//declare constant
const int size = 7;

//function prototypes
void initializeArray(int carSales[], int size);
void inputDataArray(int carSales[], int size);
int sumArray(int carSales[], int size);
int largestSales(int carSales[], int size);
double averageSales(int carSales[], int size);
void outputDataArray(int carSales[], int size);

//main function 
int main ()
{
	int sum, largestSale, maxIndex, index;
	double average;
	cout << fixed << showpoint << setprecision (2) << endl;
	int carSales[size];
	//call the functions
	initializeArray(carSales, size);
	inputDataArray(carSales, size);
	sumArray(carSales, size);
	largestSales(carSales, size);
	averageSales(carSales, size);
	outputDataArray(carSales, size);
	system("pause");
	return 0;
}

//initializeArray Function
void initializeArray(int carSales[], int size)
{
	int index;
	for (index = 0; index < size; index++)
	carSales[index] = 0;
}

//inputDataArray Function
void inputDataArray(int carSales[], int size)
{
	int index;
	cout << "Input the 7 values for the array, carSales: ";
	for (index = 0; index < size; index++)
		cin >> carSales[index];
	cout << endl;
}

//sumArray Function
int sumArray(int carSales[], int size)
{
	//declare an int variable named sum
	int sum;
	//calculate the sum of all of the car sales for the week
	sum = carSales[0] + carSales[1] + carSales[2] + carSales[3] + carSales[4] + carSales[5] + carSales[6];
	return sum;
}

//largestSales Function
int largestSales(int carSales[], int size)
{
	//calculate the largest car size of the week
	int maxIndex = 0;
	int index, largestSale;
	for (index = 1; index < size; index++)
		maxIndex = index;
	largestSale = carSales[maxIndex];
	return largestSale;
}

//averageSales Function
double averageSales(int carSales[], int size)
{
	int sum;
	//calculate the sum of all of the car sales for the week
	sum = carSales[0] + carSales[1] + carSales[2] + carSales[3] + carSales[4] + carSales[5] + carSales[6];
	double average;
	//calculate the average of all of the car sales for the week
	average = sum / size;
	return average;
}

//outputDataArray Function
void outputDataArray(int carSales[], int size)
{
	//declare a int variable named sum
	int sum, index;
	//calculate the sum of all of the car sales for the week
	sum = carSales[0] + carSales[1] + carSales[2] + carSales[3] + carSales[4] + carSales[5] + carSales[6];
	cout << "The sum of the car sales is: " << sum << endl;
	double average;
	//calculate the average of all of the car sales for the week
	average = sum / size;
	cout << "The average of the car sales is: " << average << endl;
	//print all of the values of the array
	cout << "The values in the array, carSales, are: " << endl;
	for (index = 0; index < size; index++)
		cout << carSales[index] << endl;
}
