/*
    File: /run/media/trungtin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai02.cpp
    Author: Trung Tin Nguyen
    Date: Saturday, 30/11/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập vào ma trận N x M gồm các số nguyên dương. Đếm số lượng số nguyên tố
trong ma trận này. 
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;

    if(n % 2 == 0 || n % 3 == 0) return false; 
  
    for (int i = 5, j = sqrt(n); i < j; i+=6) 
        if (n % i == 0 || n % (i + 2) == 0) return false;     
    return true;
}
int main() {
    int a[100][100];
    double x;
    int n;
    cout << "Nhap n: ", cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            do
            {
                cout << "Nhap a[" << i << "][" << j << "] = ", cin >> x;
                a[i][j] = x;
            } while (x - a[i][j] != 0 || a[i][j] <= 0);
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(isPrime(a[i][j])) count++;
        }
    }

    cout << "So luong so nguyen to: " << count << endl;
    system("pause");
    return 0;
}