// Problem14SwapTwoNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


void ReadTwoNumbers(int &Number1 ,int &Number2){
	cout << "Please Enter To Number1 \n";
	cin >> Number1;
	cout << "Please Enter To number \n";
	cin >> Number2;

}

void Swap(int &Num1, int &Num2){
	int Temp;
	Temp = Num1;
	Num1 = Num2;
	Num2 = Temp;	
	
}
void PrintTwoNumber(int Number1, int Number2){
	
	cout << "Number1: "   << Number1<< "\n";
	cout << "Number2: "  << Number2<< endl;

}
int main()
{
	int Num1, Num2;
	ReadTwoNumbers(Num1, Num2);
	PrintTwoNumber(Num1, Num2);
	Swap(Num1, Num2);
	PrintTwoNumber(Num1, Num2);

	return 0;
}
