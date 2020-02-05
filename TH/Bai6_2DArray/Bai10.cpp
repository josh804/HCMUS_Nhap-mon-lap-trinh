/*
    File: /media/tin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai09.cpp
    Author: Trung Tin Nguyen
    Date: Monday, 02/12/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Đếm số lượng giá trị “Hoàng Hậu” trên ma trận. Một phần tử được gọi là Hoàng
Hậu khi nó lớn nhất trên dòng, trên cột và hai đường chéo đi qua nó
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
bool maxOfColumm(double a[][MAX], int n, int row, int col) {
    for(int i = 0; i < n; i++) {
        // cout << row << " " << i << endl;
        if(a[i][col] > a[row][col]) return false;
    }
    return true;
}
bool maxOfDiagonalLines(double a[][MAX], int n, int row, int col) {
    int 
        posX, posY;

    
    int mask[][2] = {
        {-1,  1}, // up right: row - 1, col + 1
        {-1, -1}, // up left: row - 1, col - 1
        { 1,  1}, // down right: 
        { 1, -1} // down left
    };

    for(int i = 0; i < 4; i++) {
        posX = row + mask[i][0];
        posY = col + mask[i][1];
        while(posX >= 0 && posX < n && posY >= 0 && posY < n) {
            if(a[posX][posY] > a[row][col]) return false;
            // cout << "Compare a[" << row << "][" << col << "] with a[" << posX << "][" << posY << "]" << endl;
            posX += mask[i][0];
            posY += mask[i][1];
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
            {1,     3,      6,      7},
            {6,     0,      2,      1},
            {9,     2,      9,      2},
            {4,     0,      1,      922}
        };  
        // a[][]
        int n = 4;
    #endif            
    
    unsigned int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(maxOfRow(a, n, i, j) && maxOfColumm(a, n, i, j) && maxOfDiagonalLines(a, n, i, j)) {
                // cout << "\t" << i << "\t" << j << endl;
                count = count + 1;
            }
        }
    }
    cout << "So luong gia tri hoang hau: " << count << endl;
    system("pause");
    return 0;
}