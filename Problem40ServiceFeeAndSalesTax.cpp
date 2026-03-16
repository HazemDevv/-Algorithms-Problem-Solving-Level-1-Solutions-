// Problem40ServiceFeeAndSalesTax.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float ReadPositiveNumber(string Message){
	float Number =0 ;
	do {
		cout << Message << "\n";
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

float CalcluateServiceFeeAndSalesTax(float BillValue){
	
	float Temp;
    
	Temp = BillValue * 1.10;
	BillValue = Temp * 1.16;
	return BillValue;
}

int main()
{
	int BillValue = ReadPositiveNumber("Please Enter a Positive Bill Value?");
	cout << "Total Bill =" << CalcluateServiceFeeAndSalesTax(BillValue) << endl;
	return 0;
}
