// Probelm47LoanInsallmentMonths.cpp : This file contains the 'main' function. Program execution begins and ends there.
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
float TotalMonths(float LoanAmount , float MonthlyInstallment) {
	

	return (float)LoanAmount / MonthlyInstallment;
 }

int main()
{
	float LoanAmount = ReadPositiveNumber("Please Enter a Loan Amount");
	float MonthlyInstallment = ReadPositiveNumber("Please Enter a Monthly Installment");

	cout << "\n Total Month To Pay " << TotalMonths(LoanAmount, MonthlyInstallment) << endl;
	return 0;
}