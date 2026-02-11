// Problem10AverageOf3Marks.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void ReadMarks(int &Mark1, int &Mark2 , int &Mark3){

	cout << "Please Enter To Mark1? \n";
	cin >> Mark1;
	cout << "Please Enter To Mark2? \n";
	cin >> Mark2;
	cout << "Please Enter To Mark3? \n";
	cin >> Mark3;

}
int  SumOf3Marks(int Mark1, int Mark2, int Mark3) {

	return Mark1 + Mark2 + Mark3;
}
float CalculateAverage(int Mark1, int Mark2, int Mark3){

	return  (float)SumOf3Marks( Mark1, Mark2, Mark3) / 3;
}
void PrintMarks(float Avg) {

	cout << "The Average Of Marks is: " << Avg;

}
int main()
{
	int Mark1, Mark2, Mark3;
	ReadMarks(Mark1, Mark2, Mark3);
	PrintMarks(CalculateAverage(Mark1, Mark2, Mark3));
	return 0;
}