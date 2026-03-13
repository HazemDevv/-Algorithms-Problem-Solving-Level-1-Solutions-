// Problem36SimpleCalculater.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
enum EnOperationType{ Add = '+' , Subtract = '-' , Multiply = '*' , Divide = '/'};

float  ReadNumber(string Message)
{
	float Number = 0;
	cout << Message;
	cin >> Number;
	return Number;
}
EnOperationType ReadOpType() {
	char Op = '1';
	cout << "Please Enter a Operation Type ( + , - , * , / ) ? \n";
	cin >> Op;
	return (EnOperationType)Op;
}
float Calculate(int Number1, int Number2 , EnOperationType OpType){

	switch (OpType) {
	case EnOperationType::Add:
		return Number1 + Number2;
	case EnOperationType::Subtract:
		return Number1 - Number2;
	case EnOperationType::Multiply:
		return Number1 * Number2;
	case EnOperationType::Divide:
		return Number1 / Number2;

	}
}
int main()
{
	float Number1 = ReadNumber("Please Enter The First Number \n");
	float Number2 = ReadNumber("Please Enter The Seconds Number \n");
	EnOperationType OpType = ReadOpType();
	cout << "Result = " << Calculate(Number1, Number2, OpType) << endl;
	return 0;
}