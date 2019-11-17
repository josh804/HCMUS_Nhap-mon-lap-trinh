/*
    File: Bai09.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết chương trình để tính giai thừa của một số nguyên dương
*/

#include <iostream>
using namespace std;

unsigned long factorial(int n) {
    if(n == 0) return 1;
    unsigned long result = 1;
    for(int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() 
{
    int n;
    do
        cout << "Nhap so nguyen duong: ", cin >> n;
    while(n < 0);

    unsigned long result = factorial(n);

    cout << n << "! = " << result << endl;

    system("pause");
    return 1;
}