/*
Author: Brianna Scott
Lab 4 
CSC 260L
9/15/16
*/

//preprocessor directives
#include <iostream>
#include <string>

//namespace statement
using namespace std;

//struct
struct studentData
{
	string Fname;
	string Lname;
	string major;
	string email;
	int age;
	double gpa;	
};

//object name
struct studentData NSU;

//function prototypes
void getData(struct studentData);
void gpaAwards(struct studentData);
void printStudents(struct studentData);

//main function
int main()
{
	//call the functions
	getData(NSU);
	gpaAwards(NSU);
	printStudents(NSU);
	//press any key to continue....
	system("pause");
	//end the main function
	return 0;	
}

//getData function
void getData(struct studentData)
{
	//input data
	//Begin by asking for the first name
	cout << "Enter the NSU student's first name: \n ";
	cin >> NSU.Fname;
	cout << endl;
	//Ask user for the last name
	cout << "Enter the NSU student's last name: \n ";
	cin >> NSU.Lname;
	cout << endl;
	//ask the user to input their major
	cout << "Enter the NSU student's major: \n ";
	cin >> NSU.major;
	cout << endl;
	//ask user for the student's age
	cout << "Enter the NSU student's age: \n ";
	cin >> NSU.age;
	cout << endl;
	//ask user for the student's grade point average
	cout << "Enter the NSU student's GPA: \n ";
	cin >> NSU.gpa;
	cout << endl;
	//ask the user to input the student's email
	cout << "Enter the NSU student's email address: \n ";
	cin >> NSU.email;
	cout << endl;	
}

//gpa awards function
void gpaAwards(struct studentData)
{
	// This is where the computer decides which award the student should get
	//based on their GPA
	cout << "This is the GPA Awards. Welcome. \n" << endl;
	if (NSU.gpa >= 3.5)
	cout << "This is an excellent student." << endl;
	else
	if (NSU.gpa >= 3.0)
	cout << "This is a great student." << endl;
	else
	if (NSU.gpa >= 2.5)
	cout << "This is a good student." << endl;
	else
	cout << "This student needs to improve on their grades." << endl;
		
}
//print results function
void printStudents(struct studentData)
{
	//output

	cout<< "The NSU student is: \n ";
	cout << "================== \n ";
	cout << NSU.Fname << " " << NSU.Lname << " " << NSU.age << " "<< NSU.gpa << " " << NSU.major <<" "<< NSU.email;
	cout << endl;
}