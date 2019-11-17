/*
    File: Bai04.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Viết hàm kiểm tra một số nguyên có dạng 2k hay không. Hàm này sẽ trả về TRUE
hoặc FALSE
*/
#include <iostream>
#include <cmath>
using namespace std;

bool Calculate(double number)
{
    // Ham kiem tra mot so co dang 2^k hay khong.
    int exponent = log2(number);

    if(number == pow(2, exponent)) return true;
    return false;
}
int main()
{
    // bool result = Calculate(128); // Expect value: 1
    // bool result = Calculate(129); // Expect value: 0
    double n;
    do
        cout << "Nhap n: ", cin >> n;
    while(n <= 0);

    bool result = Calculate(n);
    if(result)  cout << "TRUE";
    else        cout << "FALSE";
    cout << endl;
    system("pause");
    return 0;
}