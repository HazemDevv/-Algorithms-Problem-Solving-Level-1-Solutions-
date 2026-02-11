// Problem9SumOf3Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

using namespace std;
void ReadSumOfNumber3(int& Num1, int& Num2, int& Num3) {
	cout << "Please Enter Numbers1? \n";
	cin >> Num1;
	cout << "Please Enter Number2? \n";
	cin >> Num2;
	cout << "Please Enter Number3? \n";
	cin >> Num3;




}

int sumOfNumbers(int Num1, int Num2, int Num3) {

	return Num1 + Num2 + Num3;
}

void PrintResult(int Total) {

	cout << "\n The total sum of numbers is: " << Total << endl;

}
int main()
{
	int Num1, Num2, Num3;
	ReadSumOfNumber3(Num1, Num2, Num3);
	PrintResult(sumOfNumbers(Num1, Num2, Num3));
	return 0;
}