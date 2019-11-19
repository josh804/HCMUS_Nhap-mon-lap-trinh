/*
    File: Bai06.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
      Nhập mảng một chiều có n phần tử là những số nguyên dương. Xóa k phần tử liên
tục trên mảng bắt đầu từ một vị trí i cho trước
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    do
        cout << "Nhap n: ", cin >> n;
    while(n < 1 || n > 100);

    int a[100];
    for(int i = 0; i < n; i++) {
        cout << "Nhap a[" << i << "] = ", cin >> a[i];
    }

    int deletePoint;
    do
        cout << "Nhap phan tu thu i can xoa: ", cin >> deletePoint;
    while(deletePoint < 0 || deletePoint >= n);

    int k;
    do
    {
        cout << "Nhap k: ", cin >> k;
    } while (k < 0);
    
    n -= k;

    for(int i = deletePoint; i < n; i++) {
        a[i] = a[i + k];
    }

    cout << "Mang moi: \n";
    for(int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    system("pause");
    return 0;
}