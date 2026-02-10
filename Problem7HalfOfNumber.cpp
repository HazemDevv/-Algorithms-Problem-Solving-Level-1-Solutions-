// Problem7HalfOfNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;


int ReadNumber() {
	int Number;
	cout << "PLease Enter To Number? \n";
	cin >> Number;

	return Number;
}
float CalculateHalfNumber(int Number){
	
	return (float) Number / 2;
}
void PrintResult(int Number) {
	string Result = "Half Of " + to_string(Number) + " is " + to_string(CalculateHalfNumber(Number));
	cout << Result << endl;

}
int main()
{
	PrintResult(ReadNumber());

	return 0;
}
