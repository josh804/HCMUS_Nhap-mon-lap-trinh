/*
    File: Bai08.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập mảng một chiều có n phần tử là những số nguyên dương. Tìm số lớn thứ hai
xuất hiện trong mảng
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
        cout << "a[" << i << "] = ", cin >> a[i];
    }
    int max = a[0];
    int previous = max;

    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            previous = max;
            max = a[i];
        }
    }

    cout << previous << '\n';
    system("pause");
    return 0;
}