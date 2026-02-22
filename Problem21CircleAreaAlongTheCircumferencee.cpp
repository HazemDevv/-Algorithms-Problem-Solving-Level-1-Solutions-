// Problem21CircleAreaAlongTheCircumferencee.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

float ReadCircumference() {
	float L;
	cout << "Please Enter Circumference? \n";
	cin >> L;
	return L;
}

float CircleAreaByCircumference(float L){
	const float PI = 3.14;
	float Area = pow(L, 2) / (4 * PI);
	return Area;
}
void PrintResult(float Area){
	cout << "Circle Area : " << Area << endl;

}
int main()
{ 
	PrintResult(CircleAreaByCircumference(ReadCircumference()));

	return 0;
}
