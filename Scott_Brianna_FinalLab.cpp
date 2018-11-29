/*
Author: Brianna Scott
Date: November 30th, 2016
Purpose: This is the final lab for CSC 260L.
*/

#include <iostream>
#include <string>

using namespace std;

//struct
struct storeRecords
{
	string itemID;
	string itemDescription;
	double price;
	int quantity;
	string stockDate;
	string supplierContact;
};

//object names
storeRecords Target;
storeRecords Walmart;
storeRecords BestBuy;
storeRecords Kmart;
storeRecords PartyCity;

void getData(storeRecords);
void printRecords(storeRecords);

int main()
{
	//input
	getData(Target);
	//output
	printRecords(Target);
	system("pause");
	return 0;
}

void getData(struct storeRecords)
{
	//Target's Information
	cout << "Enter the Target item ID: ";
	cin >> Target.itemID;
	cout << endl;

	cout <<"Enter the Target item description: ";
	cin >> Target.itemDescription;
	cout << endl;

	cout << "Enter the price of the object at Target: ";
	cin >> Target.price;
	cout << endl;

	cout << "Enter the quantity in stock for this object: ";
	cin >> Target.quantity;
	cout << endl;

	cout << "Enter the date the object was stocked: ";
	cin >> Target.stockDate;
	cout << endl;

	cout << "Enter the supplier's contact information: ";
	cin >> Target.supplierContact;
	cout << endl;
	}



void printRecords(storeRecords)
{
	//Target
	cout << "The store records for Target are: ";
	cout << Target.itemID << " " << Target.itemDescription << " " << Target.price << " " << Target.quantity << " " << Target.stockDate << " " << Target.supplierContact << endl;
	cout << " I chose a Struct for my final lab. The reason I chose it was because it made the most sense when it comes to a program like this." << endl; 
}