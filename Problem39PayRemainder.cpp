// Problem39PayRemainder.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

float ReadPositiveNumber(string Message){
	float Number = 0;

	do{
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}
float CalcluateTotalBill(int TotalBill, int TotalCashPaid){


	return  TotalCashPaid - TotalBill;
}
int main()
{
	int TotalBill = ReadPositiveNumber("Please Enter Total Bill?");
	int TotalCashPaid = ReadPositiveNumber("Please Enter Total Cash Paid?");
	
	
	cout << "\n";
	cout << "Total Bill = " << TotalBill << "\n";
	cout << "Total Cash Paid = " << TotalCashPaid << "\n";

	cout << "************************************\n";
	cout << "Remainder = " << CalcluateTotalBill(TotalBill, TotalCashPaid) << endl;
	return 0;
}