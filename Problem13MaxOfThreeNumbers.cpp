// Problem13MaxOfThreeNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void ReadNumber(int& Num1, int& Num2 , int &Num3, int &Num4) {
	cout << "Please Enter To Number1 \n";
	cin >> Num1;
	cout << "Please Enter To Number2 \n";
	cin >> Num2;
	cout << "Please Enter To Number3 \n";
	cin >> Num3;
	cout << "Please Enter To Number4 \n";
	cin >> Num4;
}
int MaxOfTwoNumbers(int Num1, int Num2, int Num3, int Num4 ) {

	if (Num1 >= Num2) 
	    if (Num1 >= Num3)
			if(Num1 >= Num4)
           	return Num1;
	else 
		return Num4;
	if (Num2 >= Num3)
		if(Num2 >= Num4)
		return Num2;
	else
		return Num4;
	if (Num3 >= Num4)
		return Num3;
	else Num4;
}
void PrintNumber(int Max) {
	cout << "Max Of To Number: " << Max << "\n";
}
int main()
{
	int Num1, Num2, Num3,Num4;
	ReadNumber(Num1, Num2, Num3,Num4);
	PrintNumber(MaxOfTwoNumbers(Num1, Num2, Num3,Num4));
	return 0;
}