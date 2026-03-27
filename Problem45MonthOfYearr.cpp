
// Problem45MonthOfYearr.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
enum enMonthsOfYear {
    January = 1, February = 2, March = 3, April = 4,
    May = 5, June = 6, July = 7, August = 8,
    September = 9, October = 10, November = 11, December = 12
};
float ReadNumber(string Message,int From , int To) {
    float Number = 0;
    do {
        cout << Message << "\n";
        cin >> Number;
    } while (Number < From || Number > To);
    return Number;
}
enMonthsOfYear ReadNumberInRange() {


    return (enMonthsOfYear)ReadNumber("PLease Enter a Month [1 To 12]", 1 , 12);
}

string GetMonthOfYears(enMonthsOfYear Month) {
    switch(Month){
    case enMonthsOfYear::January:
        return "January";
    case enMonthsOfYear::February:
        return "February";
    case enMonthsOfYear::March:
        return "March";
    case enMonthsOfYear::April:
        return "April";
    case enMonthsOfYear::May:
        return "May";
    case enMonthsOfYear::June:
        return "June";
    case enMonthsOfYear::July:
        return "July";
    case enMonthsOfYear::August:
        return "August";
    case enMonthsOfYear::September:
        return "September";
    case enMonthsOfYear::October:
        return "October";
    case enMonthsOfYear::November:
        return "November";
    case enMonthsOfYear::December:
        return  "December";

    }

  
}

int main()
{
    cout << GetMonthOfYears(ReadNumberInRange()) << endl;
	return 0;
}
