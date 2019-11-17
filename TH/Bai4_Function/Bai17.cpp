/*
    File: Bai17.cpp
    Author: Trung Tin Nguyen
    Date: 14.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Viết hàm kiểm tra các chữ số của số nguyên dương n có tăng dần từ trái sang phải
hay không.
*/

#include <iostream>
using namespace std;

bool ascendingOrder(long n) {
    long tmp = 9, remain;
    while(n != 0) {
        remain = n % 10;
        
        if(remain > tmp) return false;
        n = n / 10;
        tmp = remain;
    }

    return true;
}
int main() {
    long n;
    do
    {
        cout << "Nhap n: ", cin >> n;
    } while (n <= 0);
    
    if(ascendingOrder(n))   cout << "Co sap xep theo thu tu tang dan";
    else                    cout << "Khong sap xep theo thu tu tang dan.";

    cout << endl;
    system("pause");
    return 0;
}