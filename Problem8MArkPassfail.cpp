// Problem8MArkPassfail.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

enum EnPassFail{Pass = 1 , Fail = 2};
int ReadMark() {

	int Mark;
	cout << "Please Enter TO Mark? \n";
	cin >> Mark;
	return Mark;

}

EnPassFail CheckPassfail(int Mark) {
	if (Mark >= 50)
		return EnPassFail::Pass;
	else
	return	EnPassFail::Fail;
}
void PrintMark(int Mark) {
	if (CheckPassfail(Mark) == EnPassFail::Pass)
		cout << "\n You Passed" << endl;
	else
		cout << "\n You  Failed" << endl;
	
}

int main()
{
	PrintMark(ReadMark());
	
	return 0;
}
