/*
    File: /run/media/trungtin/O DIA CHUNG/School/NMLT/TH/Bai6_2DArray/Bai04.cpp
    Author: Trung Tin Nguyen
    Date: Saturday, 30/11/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập vào ma trận N x N gồm các số thực. Biến đổi ma trận bằng cách thay đổi các
phần tử bằng số nguyên gần nó nhất. 
*/
#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if(n <= 1) return false;
    if(n <= 3) return true;

    if(n % 2 == 0 || n % 3 == 0) return false; 
  
    for (int i = 5, j = sqrt(n); i < j; i+=6) 
        if (n % i == 0 || n % (i + 2) == 0) return false;     
    return true;
}
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

    int count = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int tmp = a[i][j];
            while(isPrime(tmp) == false) tmp++;
            int tmp2 = a[i][j];
            while(isPrime(tmp2) == false && tmp2 > 0) tmp2--;
            
            if(tmp2 == 0) cout << tmp << '\t';
            else 
                cout << (abs(tmp-a[i][j]) > abs(tmp2-a[i][j]) ? tmp : tmp2) << "\t";
        }
        cout << endl;
    }


    system("pause");
    return 0;
}