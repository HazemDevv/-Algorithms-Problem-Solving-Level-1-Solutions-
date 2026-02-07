// Problem2ReadName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
string ReadName() {
	string Name;
	cout << "Please Enter Your Name? \n";
	getline(cin, Name);
	return Name;
}

void PrintName(string Name) {
	cout << "\nYour Name is: " << Name << endl;

}
int main()
{
	PrintName(ReadName());
	return 0;
}