// Problem33GradeA_B_C_D_E_F.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;


int ReadGrade(int From , int To) {
	int Grade;
	do {
		cout << "Please Enter a Grade Between 0 and 100" << "\n";
		cin >> Grade;
	} while (Grade < From || To <= Grade);
	return Grade;
}
char GetGradeLetters(int Grade){
	
	if (Grade >= 90) {
		return 'A';
	}
	else if (Grade >= 80){
		return 'B';
	}
	else if (Grade >= 70) 
	{
		return 'C';
	}
	
	else if (Grade >= 60){
		return 'D';
	}
	else if (Grade >= 50) {
		return 'E';
	}
	
	else {
		return 'F';
	}
	return Grade;
}
int main()
{
	cout << endl << "Result = " << GetGradeLetters(ReadGrade(0,100)) << endl;
}