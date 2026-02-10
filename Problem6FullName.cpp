// Problem6FullName.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

struct StInfo {
	string FirstName;
	string LastName;
};
//His job is to read the first and last words of your name.
StInfo ReadFullName() {
	StInfo Info;
	cout << "Please Enter Your FirstName? \n";
	cin >> Info.FirstName;
	cout << "Please Enter Your LastName? \n";
	cin >> Info.LastName;

	return Info;
}
//Its function is simply to sum the first and last names, and I also added a variable to reverse the name if correct.
string GetFullName(StInfo Info, bool reverse) {
	string FullName = " ";
	if (reverse)
		FullName = Info.LastName + " " + Info.FirstName;
	else
		FullName = Info.FirstName + " " + Info.LastName;
	return FullName;
}
//Its only task is to print after we've combined them using a function above and added the variable we combined inside the parameter.
void PrintFullName(string FullName){
	cout << "Your Full name is: " << FullName << endl;
}

//Inside the main area, we just need to prepare the function above.
int main()
{
	PrintFullName(GetFullName(ReadFullName(),0));
	return 0;
}
