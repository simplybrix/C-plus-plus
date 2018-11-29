/*
Author: Brianna Scott
Date: March 19th, 2017
Purpose: Write a small program in the NEW LANGUAGE you're learning that illustrates all FIVE of these concepts. 
		 Insert comments in the code that point out to me where each of these concepts is illustrated.
*/

//Preprocessor Directives
#include <iostream>
#include <cctype>

//Namespace Statement
using namespace std;

//Main function
int main ()
{
//Declare The variables
	char parenL = '('; 
	char parenR = ')'; 
	char multi = '*'; 
	char add = '+'; 
	
	char expr[100]; 
	int i = 0;

//ask for expression input
	cout << "Please enter an expression" << endl; 
	cin.getline(expr, 100); 

//begin the giant for loop that searches for the tokens and lexemes
	for (i = 0; expr[i] != NULL; i++) 
	{
	//If the input is greater than a but less than z
	//Look-ahead to the next character in the input stream. If it’s letter or digit, then you have a 3-character ID.
		 if (expr[i] >= 'a' && expr[i] <= 'z')
		 {
			cout << " The lexeme is " << expr[i] << " and Token is <ID> that only prints lowercase only." << endl;
		 }
	//Left parenthesis 
		else if (expr[i] == parenL) 
		{
			cout << " The lexeme is " << expr[i] << " and Token is parenL." << endl;
		}
	//right parenthesis
		else if (expr[i] == parenR) 
		{ 
			cout << " The lexeme is " << expr[i] << " and Token is parenR." << endl;
		} 
	//add operator
		else if (expr[i] == add) 
		{ 
			cout << " The lexeme is " << expr[i] << " and Token is add." << endl; 
		} 
	//multiplication operator
		else if (expr[i] == multi) 
		{ 
			cout << " The lexeme is " << expr[i] << " and Token is multi." << endl;
		}
	//else if it is invalid, print that it is.
		else   
			{
				if (expr[i] != 'a' && expr[i] != 'z')
					{
						cout << "ERROR." << endl; 
						cout << "The lexeme " << expr[i] << " is invalid." << endl; 
						
					}
			//If the expression is between an uppercase A and Z
				if (expr[i] >= 'A' && expr[i] <= 'Z') 
				{
				//check to see if it is an uppercase letter
					cout << "The program will now check to see if the expression is valid.";
					cout << " If the expression contains a uppercase, it will print a 1 (True). Else, It will return a 0 (False)." << endl;
					cout << isupper(expr[i]) << endl;
					if (isupper(expr[i]) == 1)
					{
						cout << " The lexeme is not valid because it is uppercase. The correct version will print in ASCII."<< endl;
						cout << "The correct version is " << tolower(expr[i]) << endl;
						cout << " The program will now break." << endl;
						break;
					}
					else
						cout << "Error. Something is incorrect with this program." << endl;
						break;
				} 
			} 
}
//Print "Press any key to continue..." on screen and wait for a key press
	system("pause");
//End the Main function
	return 0;
}