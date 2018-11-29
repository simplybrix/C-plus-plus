/*
Author: Brianna Scott
Date: 2/15/17
Purpose: Create a lexical analyzer or scanner for the week 6 hands on assignment.
***UPDATED***
*/

#include <iostream>
#include <stdio.h>
#include <string>
#include <ctype.h>

//Global Declarations and Variables
int charClass, token, nextToken, lexLen;
char lexeme[100];
char nextChar;

//Functions
void addChar();
void getChar();
void getNonBlank();
int lex();

//Character Classes and Token Codes
#define LETTER 0
#define Digit 1
#define add_Op 2
#define mult_Op 4
#define left_Paren 5
#define right_Paren 6
#define Unknown 8
#define INT_LIT 9
#define IDENT 10

//namespace statement
using namespace std; 

int main()
{
	string expression;
	cout << "Enter the expression: ";
	cin >> expression;
	cout << "The expression is: " << expression << endl;
	addChar();
	getNonBlank();
	getChar();
	do {
	lex();
	} 
	while (nextToken != EOF);
	addChar();
	getNonBlank();
	system("pause");
	return 0;
}

int lookup(char ch)
{
	switch (ch)
	{
	case '(':
		addChar();
		nextToken = left_Paren;
		break;
	case ')':
		addChar();
		nextToken = right_Paren;
		break;
	case '+':
		addChar();
		nextToken = add_Op;
		break;
	case '*':
		addChar();
		nextToken = mult_Op;
		break;
	default:
		addChar();
		nextToken = EOF;
		break;	
	}
	return nextToken;
}

void addChar()
{
	if (lexLen <= 98)
	{
		lexeme[lexLen++] = nextChar;
		lexeme[lexLen] = 0;
	}
	else
		cout << "Error - The lexeme is too long. \n";
}

void getChar()
{
	if (nextChar){
	if (isalpha(nextChar))
		charClass = LETTER;
	else if (isdigit(nextChar))	
		charClass = Digit;
	else charClass = Unknown;
}
	else 
		charClass = EOF;
}

void getNonBlank()
{
	while (isspace(nextChar))
		getChar();
}

int lex()
{
	lexLen = 0;
	getNonBlank();
	switch (charClass)
	{
	case LETTER:
		addChar();
		getChar();
		while ( charClass == LETTER || charClass == Digit)
		{
			addChar();
			getChar();
		}
		nextToken = IDENT;
		break;

	case Digit:
		addChar();
		getChar();
		while (charClass == Digit)
		{
			addChar();
			getChar();
		}
		nextToken = INT_LIT;
		break;

	case Unknown:
		lookup(nextChar);
		getChar();
		break;

	case EOF:
		nextToken = EOF;
		lexeme[0] = 'E';
		lexeme[1] = 'O';
		lexeme[2] = 'F';
		lexeme[3] = 0;
		break;
	}

	cout << "Next Token is: " << nextToken << " " << "Next lexeme is: " << lexeme << endl;
	return nextToken;
}
