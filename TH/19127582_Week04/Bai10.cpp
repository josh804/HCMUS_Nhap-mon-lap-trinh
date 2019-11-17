/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai10: Viết chương trình nhập vào 3 giá trị ngày tháng năm. Cho biết ngày mai là ngày
mấy.
*/
#include <iostream>
using namespace std;

int main()
{
    // Init
    int day, month, year, lastDay;
    do
        cout << "Nhap ngay: ", cin >> day;
    while (day < 1 || day > 31);

    do
        cout << "Nhap thang: ", cin >> month;
    while (month < 1 || month > 12);
    do
        cout << "Nhap nam: ", cin >> year;
    while (year < 0);

    switch (month)
    {
    case 1:
        lastDay = 31;
        break;
    case 2:
        if (year % 4 == 0 || (year % 100 == 0 && year % 400 == 0))
            lastDay = 29;
        else
            lastDay = 28;
        break;
    case 3:
        lastDay = 31;
        break;
    case 4:
        lastDay = 30;
        break;
    case 5:
        lastDay = 31;
        break;
    case 6:
        lastDay = 30;
        break;
    case 7:
        lastDay = 31;
        break;
    case 8:
        lastDay = 31;
        break;
    case 9:
        lastDay = 30;
        break;
    case 10:
        lastDay = 31;
        break;
    case 11:
        lastDay = 30;
        break;
    case 12:
        lastDay = 31;
        break;
    }

    if ((day + 1) > lastDay)
    {
        if (month < 12)
            month++;
        else
        {
            month = 1;
            year++;
        }
        day = 1;
    }
    else
    {
        day++;
    }

    cout << "Ngay mai la ngay " << day << ", thang " << month << ", nam " << year;
    cout << endl;

    return 0;
}