/*
    File: /media/tin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai12.cpp
    Author: Trung Tin Nguyen
    Date: Wednesday, 04/12/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Chiếu gương ma trận theo trục dọc
*/

#include <iostream>
// #define DEBUG
using namespace std;

#ifndef DEBUG
    #define MAX 100
#else
    #define MAX 4    
#endif

void RowSwap(double a[][MAX], int row_1, int row_2, int length) {
    double tmp;
    for(int i = 0; i < length; i++) {
        tmp = a[row_1][i];
        a[row_1][i] = a[row_2][i];
        a[row_2][i] = tmp;
    }
}
void Solve(double a[][MAX], int n) {
    for(int i = 0, j = n / 2; i < j; i++) {
        RowSwap(a, i, n-1-i, n);
    }
}
void PrintOutput(double a[][MAX], int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
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
    PrintOutput(a, n);
    cout << endl;
    system("pause");
    return 0;
}