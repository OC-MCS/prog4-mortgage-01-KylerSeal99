//=====================================================
// Kyler Seal
// 2/20/2019
// Programming Assignment #4
// Description: Mortgage
//=====================================================
#include <iostream>
#include <string>
#include "Mortgage.h"
using namespace std;

bool parseInt(string sval, int& val);
bool parseFloat(string sval, float& val);


int main()
{
	Mortgage m; 
	string stringInput; 
	float userInputF;
	int userInputI;
	float term;
	float payment;
	float total;


	cout << "This program will determine the monthly payment of your mortgage. \n";
	cout << "Enter your loan amount: ";
	cin >> stringInput;

	while (!parseFloat(stringInput, userInputF))
	{
		cout << "Error. Enter a number value greater than zero: \n";
		getline(cin,stringInput);
	}
	m.setLoan(userInputF);

	cout << "Enter the amount of years: ";
	cin >> stringInput;

	while (!parseInt(stringInput, userInputI))
	{
		cout << "Error. Enter a number value greater than zero: \n";
		getline(cin, stringInput);
	}
	m.setYears(userInputI);

	cout << "Enter your rate amount: ";
	cin >> userInputF;

	while (!parseFloat(stringInput, userInputF))
	{
		cout << "Error. Enter a number value greater than zero: \n";
		getline(cin, stringInput);
	}
	m.setRate(userInputF);

	payment = m.getPayment();
	total = m.getTotal();

	cout << "The monthly payment will be " << payment << endl;
	cout << "The total cost will be " << total << endl;


	return 0;
}

//===============================================================
// Function Definition: Checks to see if a string is entered 
// whenever the user is supposed to enter an int. The Function
// sets the string equal to a value if the value is an int 
// Function Parameters: user input as a string and a value to 
// "return" (pass by reference) it to if the user input is already
// an int
// Return: a bool that says whether or not the user input is 
// good to use or not
bool parseInt(string sval, int& val)
{
	int num;
	bool success = true;
	try
	{
		num = stoi(sval);
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}

//===============================================================
// Function Definition: Checks to see if a string is entered 
// whenever the user is supposed to enter a float. The Function
// sets the string equal to a value if the value is an int 
// Function Parameters: user input as a string and a value to 
// "return" (pass by reference) it to if the user input is already
// a float
// Return: a bool that says whether or not the user input is 
// good to use or not
bool parseFloat(string sval, float& val)
{
	float num;
	bool success = true;
	try
	{
		num = stof(sval);
		val = num;
	}
	catch (const std::exception&)
	{
		success = false;
	}
	return success;
}