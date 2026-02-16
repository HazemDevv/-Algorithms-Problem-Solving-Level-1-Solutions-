// PProblem15RectangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void ReadArea(float& A, float& B) {

	cout << "Please enter rectangle width A \n";
	cin >> A;
	cout << "Please enter rectangle Length B  \n";
	cin >> B;
}
float CalculateRectangleArea(float A , float B){


	return A * B;
}

void PrintArea(float Area) {
	cout << "\nRectangle Area =  " << Area << endl;

}
int main()
{
	float A, B;
	ReadArea(A, B);
	PrintArea(CalculateRectangleArea(A, B));
	return 0;
}
