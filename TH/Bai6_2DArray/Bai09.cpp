/*
    File: /media/tin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai09.cpp
    Author: Trung Tin Nguyen
    Date: Monday, 02/12/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Đếm số lượng phần tử cực trị trong ma trận N x N các số thực. Một phần tử được
gọi là cực trị khi nó lớn hơn tấc cả các phần tử xung quanh hoặc nhỏ hơn tất cả các
phần tử xung quanh (tính theo lân cận 8)
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
            
    cout << endl;
    system("pause");
    return 0;
}