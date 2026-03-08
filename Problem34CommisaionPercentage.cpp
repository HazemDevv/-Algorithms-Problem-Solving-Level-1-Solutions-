// Problem34CommisaionPercentage.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ReadTotalSales() {
	int TotalSales;
	
	cout << "Please Enter a TotalSales ? \n";
	cin >> TotalSales;

	return TotalSales;
}
float GetCommisaionPercentage(float TotalSales) {
	if (TotalSales >= 1000000)
		return 0.01;
	else if (TotalSales >= 500000)
		return 0.02;
	else if (TotalSales >= 100000)
		return 0.03;
	else if (TotalSales >= 50000)
		return 0.05;
	else
		return 0.00;
}
float CalculatCommisaionPercentage(float TotalSales){

	return 	GetCommisaionPercentage(TotalSales) * TotalSales;

}
int main()
{
	int TotalSales = ReadTotalSales();
	cout << "\n" << "CommisaionPercentage = " << GetCommisaionPercentage(TotalSales) << "\n";
	cout << "\n" << "Total Commisaion  = " << CalculatCommisaionPercentage(TotalSales) << endl;


	return 0;
}
