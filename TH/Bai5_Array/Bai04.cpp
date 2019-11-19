/*
    File: Bai04.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Nhập mảng số nguyên A có N phần tử, cho biết mảng đó tăng, giảm hay không tăng
không giảm.
*/

#include <iostream>
using namespace std;

bool ascendingOrder(int a[], int n) {
    int tmp = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < tmp) return false;
        tmp = a[i];
    }
    return true;
}
bool descendingOrder(int a[], int n) {
    int tmp = a[0];
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] > tmp) return false;
        tmp = a[i];
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

    bool success = false;
    if(ascendingOrder(a, n)) {
        cout << "Mang duoc sap xep theo thu tu tang dan.\n";
        success = true;
    }
    if(descendingOrder(a, n)) {
        cout << "Mang duoc sap xep theo thu tu giam dan.\n"; 
        success = true;
    }
    if(!success) cout << "Mang khong tang cung khong giam.\n";
    system("pause");
    return 0;
}