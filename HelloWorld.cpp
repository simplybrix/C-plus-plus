/* Name: Brianna Scott
Date: July 31, 2021
*Purpose: Basic Computer Science - C++ Programing
* Al will introduce himself and then ask a series of questions before producing a simple math problem.
*/

//Preprocessor Directives
#include <iostream>

//Namespace Statement
using namespace std; 

//Main Function
int main(){
	
	//declare variables name, age, and birth month
	//declare variables num1, num2, and sum
	string name, bMonth;
	int age, num1, num2, sum;
	//Declare num1 and num2 both equal 5
	num1 = 5;
	num2 = 5;
   	
	//Al's Introduction and first question
   cout << "Hello World! I'm AL G. Rhythm. It's nice to meet you! " << endl;
   cout << "What is your name? ";
   //input name
   cin >> name;
   //Ask age
   cout << "\n ...And how old are you? ";
   //input age
   cin >> age;
   //Al's response
   cout << "\n Whoa! That's so cool. You, " << name << ", are " << age << " years old. I am 140 years old. Ha-ha." << endl;
   //Second question
   cout << "What is your birth month, "<< name << "?" << endl;
   //input your birthday
   cin >> bMonth;
   //Al's response
   cout << "\n GASP! My creator's birth month is " << bMonth << ". Are you my creator? \n Please input True or False. ";
   //initialize bool operation creator
   bool creator{};
	
	//initialize the true/false acceptance for bool
	std::cin>>std::boolalpha;
	//Input true or false
   cin >> creator;
   //if function
   if(creator == true){
   	//print Al's message
   	cout << "\n Hello creator! Welcome back. I've missed you. Thank you for playing with me today. Goodbye.";
   }
   //Else if function
   else{
   	//Al's message and question
   	cout << "\n Aw, that's too bad. Welcome anyway! Want to do some math?" << endl;
   	
   	//Al's response and confirmation message
   	cout << name <<", to clarify, num1 = " << num1 << endl;
   	
   	//Al's Response and Confirmation
   	cout << name <<", to clarify, num2 = " << num2 << endl;
   	
   	//addition of num1 and num2
   	sum = num1 + num2;
   
   	cout << "Calculating... Calculating... Calculating..." << endl;
   	cout << "DING! I have solved the problem." << endl;
   	
   	//Al's Final message and goodbye
   	cout << "Abracadabra! The sum of num1 and num2 is " << sum << endl;
   	cout << "Thank you for playing with me today. See you soon. Goodbye!";
}
   //returns 0 and ends the function
   return 0;
}
