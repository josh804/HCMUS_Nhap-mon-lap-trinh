/*
    File: 19127582_C3.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Write a program that prompts the user to enter a calendar year and then informs the user
    whether the given year is a leap year. Knowing that the leap year satisfies either of the two
    following conditions: a) the year is divisible by 4 and not divisible by 100, or b) the year is
    divisible by 400.
*/

#include <iostream>
using namespace std;

bool isLeapYear(long year) {
    return (year % 4 == 0 && year % 100 != 0 || year % 400 == 0);
}
int main() {
    long year;
    cout << "Enter year: ", cin >> year;

    if(isLeapYear(year)) {
        cout << "Nam da nhap la nam nhuan.";
    }
    else {
        cout << "Nam da nhap khong la nam nhuan.";
    }

    cout << endl;
    system("pause");
    return 0;
}