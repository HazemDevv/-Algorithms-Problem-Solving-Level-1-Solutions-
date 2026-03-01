// Problem26PrintNumberFrom1ToN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int ReadNumber(int &Number) {
	cout << "PLease Enter a Number? \n";
	cin >> Number;

	return Number;
}
void PrintRangeFrom1toN_UsingForLoop(int Number){
	int Counter = 1;
	cout << "Range Printed using For Statement:\n";
	for (Counter;  Counter <= Number; Counter++) {
		cout << Counter << endl;
	}

}
void PrintRangeFrom1toN_UsingWhile(int Number) {
	int Counter = 0;
	cout << "Range Printed using While Statement:\n";
	while(Counter < Number){
		Counter++;
		cout << Counter << endl;
	}
}
void PrintRangeFrom1toN_UsingDoWhile(int Number){
 int Counter = 0;	
	cout << "Range Printed using Do While Statement:\n";
	do {
		Counter++;
		cout << Counter << endl;
	} while (Counter < Number);

}
int main()
{
	int N;
	 ReadNumber(N);
	PrintRangeFrom1toN_UsingForLoop(N);
	PrintRangeFrom1toN_UsingWhile(N);
	PrintRangeFrom1toN_UsingDoWhile(N);
	return 0;
}
