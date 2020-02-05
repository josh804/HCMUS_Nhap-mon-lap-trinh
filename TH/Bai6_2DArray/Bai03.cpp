/*
    File: /run/media/trungtin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai03.cpp
    Author: Trung Tin Nguyen
    Date: Saturday, 30/11/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập vào ma trận N x N gồm các số thực. Xuất ra trung bình cộng của các cột
*/

#include <iostream>
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

    for(int i = 0; i < n; i++) {
        double averageValue = 0;
        for(int j = 0; j < n; j++) {
            averageValue += a[j][i];
        }
        cout << "Trung binh cong cot " << i << ": " << averageValue / n << endl;
    }

    system("pause");
    return 0;
}