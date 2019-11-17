/*
    File: Bai13.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết hàm tìm bội chung nhỏ nhất của 3 số.
*/

#include <iostream>
using namespace std;

long gcd(long a, long b) 
{
    if(b == 0) return a;
    return gcd(b, a % b);
}
long lcm(long a, long b)
{
    return a * b / gcd(a, b);
}
int main()
{
    long a, b, c;

    cout << "Nhap so thu nhat: ",   cin >> a;
    cout << "Nhap so thu hai: ",    cin >> b;
    cout << "Nhap so thu ba: ",     cin >> c;

    // long a = 36, b = 22, c = 136; // Expect value: 13,464

    cout << "Result: " << lcm(a, lcm(b, c)) << endl;

    system("pause");
    return 1;
}