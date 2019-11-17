/*
    File: Bai12.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết hàm tính a mod b (a%b). Không dùng toán tử % và /
*/
#include <iostream>
using namespace std;

long calculate(long a, long b) 
{
    if(b > a) {
        long temp = a;
        a = b;
        b = temp;
    }
    while(a >= b) {
        a = a -b;
    }
    return a;
}
int main()
{
    long a, b;
    cout << "Nhap a: ", cin >> a;
    cout << "Nhap b: ", cin >> b;

    long result = calculate(a, b);

    cout << a << " mod " << b << " = " << result << endl;
    system("pause");
    return 1;
}
