// Problem38SumUntil.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

float ReadNumber(string Message) {
	float Number = 0;
	cout << Message << "\n";
	cin >> Number;
	return Number;
}
float SumNumber() {
	int Sum = 0 , Number = 0,Counter = 1;

	do {
		Number = ReadNumber("Please Enter a Number " + to_string(Counter));
		if (Number == -99) {
			break;
	}
		Sum += Number;
		Counter++;
	} while (Number != -99);

	return Sum;
}

int main()
{
	cout << SumNumber();

	return 0;
}
