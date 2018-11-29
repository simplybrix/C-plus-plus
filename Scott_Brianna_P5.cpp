/*
Author: Brianna Scott
Date: May 2nd, 2016
*/

#include <iostream>
#include <string>

void printAllValues(float qArray2D[][5]);
void printRightLeft(float qArray2D[][5], int row, int column);
void rowColumnIndex( int & row, int & column);
void columnValues( float qArray2D[][5], int column);
void aboveBelow( float qArray2D[][5], int row, int column);

using namespace std;

int main()
{
	float qArray2D[5][5] = { { 0.0, 0.1, 0.2, 0.3, 0.4},
	{ 1.0, 1.1, 1.2, 1.3, 1.4}, { 2.0, 2.1, 2.2, 2.3, 2.4}, {3.0, 3.1, 3.2, 3.3, 3.4},
	{4.0, 4.1, 4.2, 4.3, 4.4}};
	int row, column;
	//call the functions
	printAllValues(qArray2D);
	rowColumnIndex(row, column);
	printRightLeft(qArray2D, row, column);
	columnValues(qArray2D,column);
	aboveBelow(qArray2D, row, column);
	system("pause");
	return 0;
}

//print all values on screen function
void printAllValues(float qArray2D[][5]){
	//for this array
	//create a for loop to print all values on screen
	for(int row = 0; row < 5; row++){
		for(int column = 0; column < 5; column++){
			//print all values on screen
			cout << qArray2D[row][column];
		}
	}
	cout << endl;
}

//get the row and column values function
void rowColumnIndex( int & row, int & column){
	//get row and column values
	cout << "Enter the desired row: ";
	cin >> row;
	cout << "Enter the desired column : ";
	cin >> column;
}

//Print the right to left diagonals on screen function
void printRightLeft( float qArray2D[][5], int row, int column){
	//print "The values on the right to left diagonal are:", qArray2D (right), and a line break
	cout << "The values on the right to left diagonal are: " << qArray2D[row][column+1] << endl;
	//print "The values on the right to left diagonal are:", qArray2D (left), and a line break
	cout << "The values on the right to left diagonal are: " << qArray2D[row][column-1] << endl;
}

//print all values in the given column function
void columnValues( float qArray2D[][5], int column){
	//for this array
	//create a for loop to print all the values in the given column
	for (int row = 0; row < 5; row++){
		//print "The values in this column are:", the array, qArray2D, and a line break
		cout << "The values in this column are: " << qArray2D[row][column] << endl;
	}
}

//print the above and below values of the given row and column index function
void aboveBelow( float qArray2D[][5], int row, int column){
	//Print "The value above is: ", the array, qArray2D, and a line break
	cout << "The value above is: " << qArray2D[row-1][column] << endl;
	//Print "The value below is: ", the array, qArray2D, and a line break
	cout << "The value below is: " << qArray2D[row+1][column] << endl;
}
