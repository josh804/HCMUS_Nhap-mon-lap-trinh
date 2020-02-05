/*
    File: /run/media/trungtin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai01.cpp
    Author: Trung Tin Nguyen
    Date: Saturday, 30/11/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập vào ma trận N x N gồm các số thực. Tìm phần tử lớn nhất trên đường chéo
chính
*/

#include <iostream>
using namespace std;

int main() {
    double a[100][100];
    int n;
    cout << "Nhap n: ", cin >> n;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << "Nhap a[" << i << "][" << j << "] = ", cin >> a[i][j];
        }
    }    
    
    double sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i < j) {
                sum += a[i][j];
            }
        }
    }
    cout << sum << endl;
    system("pause");
    return 0;
}