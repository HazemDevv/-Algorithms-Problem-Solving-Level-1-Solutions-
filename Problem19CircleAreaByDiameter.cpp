// Problem19CircleAreaByDiameter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>
using namespace std;

float ReadDiamter() {
	float D;
	cout << "Please Enter Radious D ? \n";
	cin >> D;
	return D;
}

float CircleAreaByDimeter(float D) {
	const float PI = 3.14;
	float Area = (PI * pow(D, 2)) / 4;
	return Area;

}

void PrintResult(float Area){
	cout << "Circle Area : " << Area << endl;

}
int main()
{

	PrintResult(CircleAreaByDimeter(ReadDiamter()));
	return 0;
}
