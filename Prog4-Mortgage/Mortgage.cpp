// implementation file for Mortgage class
#include <iostream>
#include <math.h>
#include "Mortgage.h"
using namespace std;

//===============================================================
// Function Definition: Constructor - sets all values to zero 
// Function Parameters:None
// Return: None
Mortgage::Mortgage() {
	loan = 0;
	years = 0;
	rate = 0;
	payment = 0;
	total = 0;
}

//===============================================================
// Function Definition: Accepts an input for the loan 
// Function Parameters:None
// Return: None
void Mortgage::setLoan(float input)
{
	loan = input;
}
//===============================================================
// Function Definition: Accepts an input for the years
// Function Parameters:None
// Return: None
void Mortgage::setYears(int input)
{
	years = input;
}
//===============================================================
// Function Definition: Accepts an input for the rate
// Function Parameters:None
// Return: None
void Mortgage::setRate(float input)
{
	rate = input / 100;
}

//===============================================================
// Function Definition: Calcualtes the monthly payment
// Function Parameters:None
// Return: A float containing the value of the payment
float Mortgage::getPayment()
{
	float term;

	term = pow(1.0 + (rate / 12.0), 12.0 * years);

	payment = (loan * (rate / 12.0) * term) / (term - 1.0);

	return payment;
}
//===============================================================
// Function Definition: Calculates the total amount spent over the
// course of the loan
// Function Parameters:None
// Return: Float containing the total
float Mortgage::getTotal()
{
	float total;

	total = payment * (years * 12);

	return total;
}