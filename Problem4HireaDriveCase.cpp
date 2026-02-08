// Problem4HireaDriveCase.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct StInfo {
	short Age;
	bool HasDriverLicense;
    bool HasRecommendation;
	
};
StInfo ReadInfo() {
	StInfo Info;
	cout << "Please Enter Your Age? \n";
	cin >> Info.Age;
	cout << "Do You Have Driver License? \n";
	cin >> Info.HasDriverLicense;
	cout << "Do you have a driver’s license ? (1 for Yes, 0 for No) \n";
	cin >> Info.HasRecommendation;
	return Info;
}
bool IsAccepted(StInfo Info) {
	if (Info.HasRecommendation) {
		return true;
	}
	else {
		return (Info.Age >= 21 && Info.HasDriverLicense);
	}
	}

void PrintResult(StInfo Info){

	if (IsAccepted(Info) ) {
		cout << "\n Hired";
}
	else {
		cout << "\n Rejected";
	}
}
int main()
{
	PrintResult(ReadInfo());
	return 0;
}
