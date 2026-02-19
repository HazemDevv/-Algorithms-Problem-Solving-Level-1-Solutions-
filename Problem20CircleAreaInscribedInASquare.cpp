// Problem20CircleAreaInscribedInASquare.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;
//some Example Problem19
float ReadSquareSide() {
	float A;
	cout << "Please Enter Inscibed A ? \n";
	cin >> A;

	return A;
}
float CircleAreaInscribedInSquare(float A){
	const float PI = 3.14159;
	float Area = PI * pow((A / 2),2);
	return Area;

}
void PrintResult(float Area) {

	cout << "Circle Area = " << Area << endl;

}
int main()
{

	PrintResult(CircleAreaInscribedInSquare(ReadSquareSide()));
	return 0;
}
