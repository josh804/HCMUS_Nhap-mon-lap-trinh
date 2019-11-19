/*
    File: Bai03.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Nhập vào một mảng N số nguyên, với 1 <= N <= 100, in ra tất cả các số nguyên tố
có trong mảng
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int number)
{
    if(number == 2) return true;
    if (number < 2 || number % 2 == 0)
        return false;
    for (int i = 3; i < sqrt(number); i += 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}
int main() {
    int n;
    do
        cout << "Nhap n: ", cin >> n;
    while(n < 1 || n > 100);

    int a[100];
    for(int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "] = ", cin >> a[i];
    }

    cout << "Cac so nguyen to co trong mang: \n";
    for(int i = 0; i < n; i++) {
        if(isPrime(a[i])) cout << a[i] << " ";
    }
    cout << '\n';
    system("pause");
    return 0;
}