// Problem48MontlyLoanInstallment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;

float ReadPositiveNumber(string Message) {
	float Number = 0;
	do {
		cout << Message << "\n";
		cin >> Number;
	} while (Number < 0);

	return Number;

}

	float CalculateTheMonthlyInstallmentAmount(float LoanAmount, float Months) {
  

		return LoanAmount / Months;
}

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter a Loan Amount");
	float Months = ReadPositiveNumber("Please Enter a Monthly");

	cout << "\nMonthly Installment " << CalculateTheMonthlyInstallmentAmount(LoanAmount, Months) << endl;
	return 0;
}