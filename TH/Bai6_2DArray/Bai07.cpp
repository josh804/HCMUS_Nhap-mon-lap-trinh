/*
    File: /run/media/trungtin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai07.cpp
    Author: Trung Tin Nguyen
    Date: Saturday, 30/11/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập vào ma trận N x N gồm các số thực. Liệt kê các dòng có tổng dòng lớn nhất
trong ma trận
*/
#include <iostream>
#include <climits>

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

    int 
        max = INT_MIN,
        result = -1;

    cout << "Dong co tong lon nhat la dong: " << '\n';
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        if(sum >= max) {
            max = sum;
            // result = i;
        }
    }
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = 0; j < n; j++) {
            sum += a[i][j];
        }
        if(sum >= max) {
            cout << i << " ";
        }
    }
    cout << endl;
    system("pause");
    return 0;
}