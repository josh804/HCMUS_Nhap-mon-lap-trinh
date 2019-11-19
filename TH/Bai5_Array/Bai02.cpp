/*
    File: Bai02.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập dãy N số nguyên dương có giá trị trong khoảng từ 1..100, tính giá trị trung
bình cộng của các số chẵn xuất hiện trong dãy
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    do
        cout << "Nhap n: ", cin >> n;
    while(n < 1 || n > 100);
    
    int a[1000];
    int sum, count = -1;

    for(int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ", cin >> a[i];
        if(a[i] % 2 == 0) {
            count++;
            sum += a[i];            
        }
    }

    double result = 1.0 * sum / (count + 1);
    cout << "Trung binh cong cua cac so chan: " << result << '\n';
    system("pause");
    return 0;
}