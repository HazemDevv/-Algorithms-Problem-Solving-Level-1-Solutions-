// Problem29SumEvenNumberFrom1ToN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

enum EnOddOrEven { Odd = 1, Even = 2 };

int ReadNumber() {
	int Number;
	cout << "Please Enter To Number? \n";
	cin >> Number;
	return Number;
}

EnOddOrEven CheckOddOREven(int Number) {
	if (Number % 2 != 0)
		return EnOddOrEven::Odd;

	else
		return 	EnOddOrEven::Even;

}
int SumODdNumbersFrom1ToN_UsingFor(int N) {
	int Sum = 0;
	cout << "Sum odd Numbers using For Statement  \n";
	for (int Counter = 1; Counter <= N; Counter++) {

		if (CheckOddOREven(Counter) == EnOddOrEven::Even) {
			Sum += Counter;
		}
	}
	return Sum;
}
int SumODdNumbersFrom1ToN_UsingWhile(int N) {
	cout << "Sum odd Numbers using While Statement  \n";
	int Sum = 0, Counter = 0;
	while (Counter < N) {

		Counter++;
		if (CheckOddOREven(Counter) == EnOddOrEven::Even) {

			Sum += Counter;

		}

	}
	return Sum;
}
int SumODdNumbersFrom1ToN_UsingDoWhile(int N) {
	cout << "Sum odd Numbers using Do While Statement  \n";
	int Sum = 0, Counter = 0;
	do {
		Counter++;
		if (CheckOddOREven(Counter) == EnOddOrEven::Even) {
			Sum += Counter;
		}
	} while (Counter < N);
	return Sum;
}

int main()
{
	int N = ReadNumber();
	cout << SumODdNumbersFrom1ToN_UsingFor(N) << endl;
	cout << SumODdNumbersFrom1ToN_UsingWhile(N) << endl;
	cout << SumODdNumbersFrom1ToN_UsingDoWhile(N) << endl;
	return 0;
}