// Problem49ATMPIN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

string ReadPinCode() {
	string PIN;
	
	cout << "Please Enter a PIN Code \n";
	cin >> PIN;

	return PIN;

}
bool Login(){
	string PINCode;
	do {
		PINCode = ReadPinCode();
		if (PINCode == "1234") {
			return 1;
		}
		else {
			cout << "\nWrong PIN\n";
			system("color 4F");
		}
 	} while (PINCode != "1234");
		
	return 0;
}
int main()
{
	if (Login()) {	
		system("color 2F");
		cout << "\nYour Account balance is " << 7500 << endl;
	}
	return 0;
}
