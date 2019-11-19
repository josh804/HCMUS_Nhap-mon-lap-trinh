/*
    File: Bai12.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập mảng một chiều có n phần tử là những số nguyên. Giả sử là mảng chứa các số
nguyên có dấu. Tìm số dương nhỏ nhất và số âm lớn nhất
*/

#include <iostream>
#include <climits>
using namespace std;

int getMinPositive(int a[], int n) {
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i] > 0 && a[i] < min) min = a[i];
    }
    return min;
}
int getMaxNegative(int a[], int n) {
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(a[i] < 0 && a[i] > max) max = a[i];
    }
    return max;
}
int main() {
    int n;
    do
        cout << "Nhap n: ", cin >> n;
    while(n <= 0);

    int a[100];

    bool 
        havePositive = false, 
        haveNegative = false;
    
    for(int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ", cin >> a[i];
        if(a[i] > 0) havePositive = true;
        if(a[i] < 0) haveNegative = true;
    }

    if(havePositive) {
        int result = getMinPositive(a, n);
        cout << "Gia tri duong nho nhat: " << result << '\n';
    }
    else {
        cout << "Mang khong chua gia tri duong.";
    }

    if(haveNegative) {
        int result = getMaxNegative(a, n);
        cout << "Gia tri am lon nhat: " << result << '\n';
    }
    else {
        cout << "Mang khong chua gia tri am.";
    }


    system("pause");
    return 0;
}