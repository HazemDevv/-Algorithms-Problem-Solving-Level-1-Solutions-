// Problem17TriangleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

	void ReadNumber(float& A, float& H) {

		cout << "Please Enter Rectangle Side A \n";
		cin >> A;
		cout << "Please Enter Rectangle Digonal H \n";
		cin >> H;
	}

	float TringleArea(float A, float H) {

		return (A/2) * H;
	}
	void PrintResult(float Area) {
		cout << "Regtnagle Area : " << Area << endl;
	}

int main()
{
	float A, H;
	ReadNumber(A, H);
	PrintResult(TringleArea(A, H));
	return 0;
}