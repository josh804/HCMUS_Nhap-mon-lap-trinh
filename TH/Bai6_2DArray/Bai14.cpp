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
// #define DEBUG
using namespace std;

#ifndef DEBUG
    #define MAX 100
#else
    #define MAX 4    
#endif

void Solve(double a[][MAX], int n) {
    double sum = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j > i) sum += a[i][j];
        }
    }
    cout << "Ket qua: " << sum;
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
            {1,     1,      1,      1},
            {2,     2,      2,      2},
            {3,     3,      3,      3},
            {4,     4,      4,      4}
        };  
        int n = 4;
    #endif

    Solve(a, n);
    cout << endl;
    system("pause");
    return 0;
}