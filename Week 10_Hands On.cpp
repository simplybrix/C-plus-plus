/*
Author: Brianna Scott
Date: March 19th, 2017
Purpose: Write a small program in the NEW LANGUAGE you're learning that illustrates all FIVE of these concepts. 
		 Insert comments in the code that point out to me where each of these concepts is illustrated.
*/

//Preprocessor Directives
#include <iostream>
#include <string>

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
	char dollarSign ='$';
	char poundSign = '#';
	char expr[100]; 
	int i = 0;

//ask for expression input
	cout << "Please enter an expression" << endl; 
	cin.getline(expr, 100); 

//begin the giant for loop that searches for the tokens and lexemes
	for (i = 0; expr[i] != NULL; i++) 
	{
	//If (current character is $ or #) then
		if (expr[i] == '$' || expr[i] == '#')
		{
		//Look-ahead to the next character in the input stream. If look-ahead is a letter then...
			cout << " The lexeme is " << expr[i] << " and Token is a dollar sign or pound sign." << endl;
		}
		else if (expr[i] >= 'a' && expr[i] <= 'z') 
		{
		//Look-ahead to the next character in the input stream. If it’s letter or digit, then you have a 3-character ID.
			cout << " The lexeme is " << expr[i] << " and Token is ID." << endl;
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
						cout << " The program will now break." << endl;
						break;
					}
			} 
}
//Print "Press any key to continue..." on screen and wait for a key press
	system("pause");
//End the Main function
	return 0;
}