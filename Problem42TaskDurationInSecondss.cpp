// Problem42TaskDurationInSecondss.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct StTaskDuration {
	float NumberOfDays , NumberOfHours , NumberOfMinutes , NumberOfSeconds;
};

float ReadPositiveNumber(string Message) {
	float Number = 0;

	do {
		cout << Message << endl;
		cin >> Number;

	} while (Number <= 0);
	return Number;
}
StTaskDuration ReadTaskDuration() {
	StTaskDuration TaskDuration;
	TaskDuration.NumberOfDays = ReadPositiveNumber("Please Enter a Number Of Days");
	TaskDuration.NumberOfHours = ReadPositiveNumber("Please Enter a Number Of Hours");
	TaskDuration.NumberOfMinutes = ReadPositiveNumber("Please Etner a Number Of Minutes");
	TaskDuration.NumberOfSeconds = ReadPositiveNumber("Please Enter a Number Of Seconds");
	return TaskDuration;   
}
float TasKDurationInSeconds(StTaskDuration TaskDuration) {
	float DurationInSeconds = 0;
	DurationInSeconds += TaskDuration.NumberOfDays *  24 * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfHours * 60 * 60;
	DurationInSeconds += TaskDuration.NumberOfMinutes * 60;
	DurationInSeconds += TaskDuration.NumberOfSeconds;

	return DurationInSeconds;
}
int main()
{
	cout << "Task Duration =  " << TasKDurationInSeconds(ReadTaskDuration());

	return 0;
}
