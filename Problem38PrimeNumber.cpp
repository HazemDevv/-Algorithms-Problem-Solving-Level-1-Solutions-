// Problem38PrimeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
enum EnPrimeOrNotPrime{Prime = 1 , NotPrime = 2};
float ReadPrimeAPositiveNumber(string Message) {
	float Number = 0;
	do {
		cout << Message << "\n";
		cin >> Number;

	} while (Number <= 0);

	return Number;
}

 EnPrimeOrNotPrime CheckNumber(int Number) {
	int Counter= 2;
	float M = round(Number /2);
	for (Counter; Counter < M;Counter++){
		if (Number % Counter == 0)
			return EnPrimeOrNotPrime::NotPrime;
	}
	return EnPrimeOrNotPrime::Prime;
}
 void PrintNumberType(int Number) {

	 switch (CheckNumber(Number)) {
      case EnPrimeOrNotPrime::NotPrime:
      cout << "The Number is NotPrime \n";
		 break;
	  case EnPrimeOrNotPrime::Prime:
     cout << "The Number is Prime \n";
		 break;
	 }
 }
int main()
{

	PrintNumberType(ReadPrimeAPositiveNumber("Please Enter a Positive Number"));
	return 0;
}