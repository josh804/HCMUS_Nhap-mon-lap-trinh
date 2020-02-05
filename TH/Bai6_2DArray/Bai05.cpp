/*
    File: /run/media/trungtin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai05.cpp
    Author: Trung Tin Nguyen
    Date: Saturday, 30/11/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập vào ma trận N x N gồm các số thực. Đếm số lượng số dương trên biên của ma
trận. 
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a[100][100];
    double x;
    int n;
    cout << "Nhap n: ", cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Nhap a[" << i << "][" << j << "] = ", cin >> a[i][j];
        }
    }

    int count = 0;

    for(int i = 0; i < n; i++) {
        if(a[0][i] > 0) count++;
    }
    for(int i = 1; i < n; i++) {
        if(a[i][n - 1] > 0) count++;
    }
    for(int i = n - 1; i >= 0; i--) {
        if(a[n - 1][i] > 0) count++;
    }
    for(int i = n - 1; i > 1; i--) {
        if(a[i][0] > 0) count++;
    }

    cout << "So duong tren bien cua ma tran: " << count << endl;
    system("pause");
    return 0;
}