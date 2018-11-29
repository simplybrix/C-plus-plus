/*
Author: Brianna Scott
Date: October 6, 2016
This program is on recursion.
*/


#include <iostream>

using namespace std;

void numbersCount(int count);

int main ()
{
	int number;
	int count = 0;
	cout << "Please enter a possible number: ";
	cin >> number;
	cout << endl;
	if (count > 1) //base case
		numbersCount(count - 1); //recursive code
	numbersCount(number);
	system("pause");
	return 0;
}

void numbersCount(int count)
{
	int i, t;

	//highest to lowest
	for( i = 0; i < count; count--)
	{
		cout << "The highest to lowest is: " << count << endl;
	}

	//lowest to highest
	t = 6;
	for(count = 1; t > count; count++)
	{
		cout << "The lowest to highest is: " << count << endl;
	}
}
