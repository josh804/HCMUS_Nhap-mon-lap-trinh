/*
    File: /media/tin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai11.cpp
    Author: Trung Tin Nguyen
    Date: Wednesday, 04/12/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Xuất ra vị trí các giá trị “Yên Ngựa” trên ma trận. 
        Một phần tử được gọi là Yên Ngựa khi nó lớn nhất trong dòng và nhỏ nhất trên Cột.
        Ví trị được xác định bằng chỉ số dòng và chỉ số cột. Bắt đầu từ 0.
*/

#include <iostream>
// #define DEBUG
using namespace std;

#ifndef DEBUG
    #define MAX 100
#else
    #define MAX 4
#endif

bool maxOfRow(double a[][MAX], int n, int row, int col) {
    for(int i = 0; i < n; i++) {
        // cout << row << " " << i << endl;
        if(a[row][i] > a[row][col]) return false;
    }
    return true;
}
bool minOfColumm(double a[][MAX], int n, int row, int col) {
    for(int i = 0; i < n; i++) {
        // cout << row << " " << i << endl;
        if(a[i][col] < a[row][col]) return false;
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
            {1,     3,     10,      7},
            {3,     0,      4,      1},
            {1,     1,      3,      2},
            {4,     0,      5,      922}
        };  
        // a[][]
        int n = 4;
    #endif            
    
    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(maxOfRow(a, n, i, j) && minOfColumm(a, n, i, j)) {
                // cout << "\t" << i << "\t" << j << endl;
                count = count + 1;
            }
        }
    }
    cout << "So luong gia tri yen ngua: " << count << endl;
    system("pause");
    return 0;
}