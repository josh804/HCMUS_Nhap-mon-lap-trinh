/*
    File: /run/media/trungtin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai08.cpp
    Author: Trung Tin Nguyen
    Date: Saturday, 30/11/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Xoay vòng theo chiều kim đồng hồ các giá trị nằm trên biên ma trận số thực.
*/

#include <iostream>
// #define DEBUG
#define MAX 100
using namespace std;

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
        double a[][4] = {
            {1,  5,  7, 2324}, 
            {3,  2,  4, -42},
            {9,  11, 12, 24},
            {24, 12, 124, -11}
        };

        int n = sizeof(a) / sizeof(a[0]);
    #endif

    /**
     * posX, posY là vị trí ta đang đứng, X là dòng, Y là cột
     * loopTimes là số lần lặp
     * step (1 hoặc 2): 
        * khi step = 1 ta duyệt n lần, sau khi duyệt ta giảm n một đơn vị
        * khi step = 2 ta duyệt n lần
    */

    int 
        mask[][2] = {
            {0, 1}, {1, 0}, {0, -1}, {-1, 0}
        };
    int 
        posX = 0,   posY = -1,      step = 2;

    int 
        b[MAX],     bLength = -1,   loopTimes = n;

    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < loopTimes; j++) {
            posX += mask[i][0];
            posY += mask[i][1];

            b[++bLength] = a[posX][posY];
        }
        switch(step) {
            case 2: 
                loopTimes = loopTimes - 1;
                step = 1;
                break;
            case 1:
                step = 2;
        }
    }   

    int tmp = b[bLength];
    for(int i = ++bLength; i > 0; i--) {
        b[i] = b[i - 1];
    }
    b[0] = tmp;
    // In the below code. We gonna go through the edge again, but this time we push a values into b
    // Init
    posX = 0,       posY = -1,
    step = 2,       bLength = -1,
    loopTimes = n;

    // Then do things
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < loopTimes; j++) {
            posX += mask[i][0];
            posY += mask[i][1];

            a[posX][posY] = b[++bLength];
        }
        switch(step) {
            case 2: 
                loopTimes = loopTimes - 1;
                step = 1;
                break;
            case 1:
                step = 2;
        }
    }

    // Print the result array
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << a[i][j] << '\t';
        }
        cout << endl;
    }
    system("pause");
    return 0;
}