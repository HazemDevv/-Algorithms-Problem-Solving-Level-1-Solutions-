// Problemm22CircleAreaInscribedinanIsoscelesTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


void ReadTringleData(float &a , float &b) {
	cout << "Please Enter Tringle Base A? \n";
	cin >> a;
	cout << "Please Enter Tringle base B? \n";
	cin >> b;

}
float CircleAreaByTringle(float a,float b){
	const float PI = 3.14;
	float Area = PI * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));
	return Area;
}

void PrintResult(float Area){
	cout << "Circle Area : " << Area << endl;
}
int main()
{
	float a, b;
	ReadTringleData(a, b);
	PrintResult(CircleAreaByTringle(a, b));

	return 0;
}
