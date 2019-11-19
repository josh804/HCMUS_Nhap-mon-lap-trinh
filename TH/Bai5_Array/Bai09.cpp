/*
    File: Bai09.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập mảng một chiều có n phần tử là những số nguyên dương. In ra tổng lớn nhất
    của k phần tử liên tiếp xuất hiện trên mảng.
        Ví dụ: với mảng n = 7 phần tử, k = 3
        5 12 67 45 87 678 3 ➔ 810
*/

#include <iostream>
#include <climits>
using namespace std;

// #define DEBUG
#define MAX_NUMBERS 100

int main() {
    #ifndef DEBUG
        int n;
        do
            cout << "Nhap n: ", cin >> n;
        while(n <= 0);

        int a[MAX_NUMBERS];

        for(int i = 0; i < n; i++) {
            cout << "a[" << i << "] = ", cin >> a[i];
        }

        int k;
        cout << "Nhap k: ", cin >> k;        
    #else
        int a[] = {124, 125, 129, 244, 952, 242, 582}; // expect output: 1776
        int n = sizeof(a) / sizeof(*a);
        int k = 3;
    #endif

    long 
        max = INT_MIN,
        tmp;
    for(int i = 0, j = n - k + 1; i < j; i++) {
        tmp = 0;
        for(int u = 0; u < k; u++) {
            tmp += a[i + u]; 
            // cout << "a[" << i + u << "] ";
        }
        if(tmp > max) max = tmp;
        cout << endl;
    }

    cout << "Tong lon nhat cua k phan tu xuat hien tren mang la: " << max << endl;

    system("pause");
    return 0;
}