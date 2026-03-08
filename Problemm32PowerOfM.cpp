
// Problemm32PowerOfM.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int ReadNumber(){
	int Number;
	cout << "Please Enter a Number \n";
	cin >> Number;
	return Number;
}
int ReadPower(){
	int Power;
	cout << "Please Enter a Power \n";
	cin >> Power;
	return Power;
}
int PowerOfM(int Number , int Power) {

	if (Power == 0) {
		return 1;
	}
	int P = 1;
	for (int i = 1; i <= Power; i++){
		P *= Number;
	}
	return P;
}
int main()
{
	cout << "Result = " << PowerOfM(ReadNumber(), ReadPower()) << endl;
	return 0;
}