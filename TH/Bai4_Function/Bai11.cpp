/*
    File: Bai11.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết hàm tính:
    S(n) = 1/2! + 2/3! + 3/4! + ... + n/(n+1)!
*/
#include <iostream>
using namespace std;

double calculate(long n)
{
    double result = 0;
    unsigned long factorial = 2UL;
    long i = 1;

    while(i < n) 
    {
        result = result + 1.0*i/factorial;
        factorial = factorial * (++i + 1);
    }
    return result;
}
int main()
{
    long n;
    do
        cout << "Nhap n: ", cin >> n;
    while(n <= 0);

    double result = calculate(n);

    cout << "S("<<n<<") = " << result << endl;
    system("pause");
    return 0;
}