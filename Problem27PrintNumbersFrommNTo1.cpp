// Problem27PrintNumbersFrommNTo1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ReadNumber() {
	int Number;
	cout << "PLease Enter a Number? \n";
	cin >> Number;

	return Number;
}
void PrintRangeFromNto1_UsingForLoop(int N) {
	int Counter = N;
	cout << "Range Printed using For Statement:\n";
	for (Counter; Counter >= 1; Counter--) {
		cout << Counter << endl;
	}

}
void PrintRangeFromNto1_UsingWhile(int N) {
	int Counter = N + 1;
	cout << "Range Printed using While Statement:\n";
	while (Counter > 1) {
		Counter--;
		cout << Counter << endl;
	}
}
void PrintRangeFromNto1_UsingDoWhile(int N) {
	int Counter = N+1;
	cout << "Range Printed using Do While Statement:\n";
	do {
		Counter--;
		cout << Counter << endl;
	} while (Counter > 1);

}
int main()
{
	int N = ReadNumber();
	PrintRangeFromNto1_UsingForLoop(N);
	PrintRangeFromNto1_UsingWhile(N);
	PrintRangeFromNto1_UsingDoWhile(N);
	return 0;
}
