/*
    File: Bai07.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Viết thủ tục nhận vào một số thập phân, xuất ra biễn diễn nhị phân của số đó. 
*/

#include <iostream>
using namespace std;

void solve(long n)
{
    char resultArray[30];
    char count = 0;

    while (n != 0)
    {
        resultArray[count] = n % 2;
        n = n / 2;
        count++;
    }

    for (char i = count - 1; i >= 0; i--)
    {
        cout << (short)resultArray[i];
    }
}
int main()
{
    long n;
    cout << "Nhap vao mot so o dang thap phan: ", cin >> n;

    solve(n);
    cout << "\n";
    system("pause");
    return 0;
}