/*
    File: Bai14.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết thủ tục nhận vào số nguyên dương n, liệt kê tất cả các cặp số nguyên dương a,
    b sao cho a^2 + b^2 <= n
*/

#include <iostream>
#include <cmath>

using namespace std;

void resolve(unsigned long n) 
{
    for(unsigned long i = 1, j = sqrt(n); i < j; i++) {
        for(unsigned long u = j; u > 0; u--) {
            if(pow(i, 2) + pow(u, 2) <= n) cout << '\t' << i << ":" << u << '\n';
        }
    }
}
int main() 
{
    unsigned long n;
    do
        cout << "Nhap vao so nguyen duong n: ", cin >> n;
    while(n <= 0);

    resolve(n);
    return 1;
}