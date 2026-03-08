// Problem30FactorialOfNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int ReadPositiveNumber(string Message){
    int Number;
    do {
        cout << Message << "\n";
        cin >> Number;
    } while (Number < 0);
    return Number;
}
int Factorial(int Num){

    int F = 1;
    for (int Counter = Num; Counter >= 1; Counter--){
        F *= Counter;
    }
    return F;
}
int main()
{
    cout << Factorial(ReadPositiveNumber("Please Enter a Positive Number???")) << endl;

    return 0;
}
