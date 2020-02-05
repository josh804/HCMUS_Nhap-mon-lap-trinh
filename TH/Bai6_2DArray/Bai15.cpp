/*
    File: /media/tin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai14.cpp
    Author: Trung Tin Nguyen
    Date: Wednesday, 04/12/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập vào ma trận N x N gồm các số thực. Tính tổng các phần tử thuộc ma trận tam
giác trên (không tính đường chéo)
*/

#include <iostream>
#define DEBUG
using namespace std;

#ifndef DEBUG
    #define MAX 100
#else
    #define MAX 4    
#endif

bool DoiXung(double a[][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) continue;
            cout << "Compare a["<<i<<"]["<<j<<"] with a["<<n-i-1<<"]["<<n-j-1<<"]"<<endl;
            if(a[i][j] != a[n-i-1][n-j-1]) {
                return false;
            }
        }
    }
    return true;    
}
int main() {
    #ifndef DEBUG
        double a[MAX][MAX];
        int n;
        cout << "Nhap n: ", cin >> n;

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                cout << "Nhap a[" << i << "][" << j << "] = ", cin >> a[i][j];
            }
        }
    #else
        double a[4][4] = {
            {1,     2,      3,      4},
            {7,     2,      5,      6},
            {6,     5,      3,      7},
            {4,     3,      2,      2}
        };
        int n = 4;
    #endif

    if(DoiXung(a, n))   cout << "Co doi xung qua duong cheo chinh";
    else                cout << "Khong doi xung qua duong cheo chinh";
    cout << endl;
    system("pause");
    return 0;
}