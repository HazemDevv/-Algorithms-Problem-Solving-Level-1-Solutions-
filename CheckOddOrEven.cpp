// CheckOddOrEven.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
enum EnNumberType{Even = 2 , odd = 1};

int ReadNumber(int &Number) {
	cout << "Please Enter To Number \n";
	cin >> Number;
	return Number;

}
EnNumberType CheckNumberType(int Number) {

	int Result = Number % 2;
	if (Result == 0) {
		return EnNumberType::Even;
	}
	else {
		return EnNumberType::odd;
	}
}
void PrintNumber(EnNumberType NumberType) {

	if(NumberType == EnNumberType::Even){
		cout << "\nNumber is Even. \n";
	}
	else {
		cout << "\nNumber is Odd. \n";
	}
}
int main()
{
	int MyNumber;
for (int i = 1; i <= 10; i++) {
//االلوب من عندي
     if(i == 3){
	 break;
	 }
		PrintNumber(CheckNumberType(ReadNumber(MyNumber)));
	}

	return 0;

}
