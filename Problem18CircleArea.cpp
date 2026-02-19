// Problem18CircleArea.cpp : This file contains the 'main' function. Program execution begins and ends there.
//


#include <iostream>

using namespace std;

float ReadRadius() {
    float R;
    cout << "Please Enter Radious R ? \n";
    cin >> R;

    return R;
}
float CircleArea(float R) {
    const float PI = 3.14;
    float Area = PI * pow(R, 2);

    return Area;

}
void PrintResult(float Area) {
    cout << "Circle Area " << Area << endl;

}
int main()
{
    PrintResult(CircleArea(ReadRadius()));


    return 0;
}
