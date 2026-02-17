// Problem16RectangleareaThroughDiagonalandSSideArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
void ReadNumber(float &A , float &D){

	cout << "Please Enter Rectangle Side A \n";
	cin >> A;
	cout << "Please Enter Rectangle Digonal D \n";
	cin >> D;
}

float RectangleAreaBySideAndDiagonal(float A , float D){

	return A * sqrt(pow(D, 2) - pow(A, 2));
}
void PrintResult(float Area){
	cout << "Regtnagle Area : " << Area << endl;
}
int main()
{
	float A,D;
	ReadNumber(A,D);
	PrintResult(RectangleAreaBySideAndDiagonal(A,D));

}
