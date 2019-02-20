
#pragma once
// header file for Mortgage class
class Mortgage
{
private:
	float loan;
	int years;
	float rate;
	float payment;
	float total;
public:
	Mortgage();
	void setLoan(float input);
	void setYears(int input);
	void setRate(float input);
	float getPayment();
	float getTotal();
};
//#endif

