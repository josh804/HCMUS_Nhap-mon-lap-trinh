/*
    File: Bai06.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Viết hàm rút gọn phân số A/B.
*/
#include <iostream>
using namespace std;

long GCD(long a, long b);

void Solve(long &a, long &b)
{
    long gcd = GCD(a, b);
    a = a / gcd;
    b = b / gcd;
}
long GCD(long a, long b)
{
    if (b == 0)
        return a;
    else
        return GCD(b, a % b);
}
int main()
{
    long a, b;

    cout << "Nhap A: ", cin >> a;
    cout << "Nhap B: ", cin >> b;

    Solve(a, b);
    if (b == 1)
    {
        cout << "Result: A/B = " << a << endl;
    }
    else
    {
        cout << "Result: A/B = " << a << "/" << b << endl;
    }
    system("pause");
    return 0;
}