/*
    File: Bai10.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập mảng một chiều có n phần tử là những số nguyên dương. Đảo ngược mảng
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    do
        cout << "Nhap n: ", cin >> n;
    while(n <= 0);

    int a[100];

    for(int i = 0; i < n; i++) {
        do
            cout << "a[" << i << "] = ", cin >> a[i];
        while(a[i] <= 0);
    }

    int b[100], j = 0;

    for(int i = n - 1; i >= 0; i--) {
        b[j++] = a[i];
    }

    cout << "Mang sau khi dao nguoc: \n" << '\n';
    for(int i = 0; i < j; i++) {
        cout << b[i] << " ";
    }

    cout << '\n';
    system("pause");
    return 0;
}