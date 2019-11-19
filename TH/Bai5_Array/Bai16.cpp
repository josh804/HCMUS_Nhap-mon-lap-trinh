/*
    File: Bai16.cpp
    Author: Trung Tin Nguyen
    Date: 18.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Cho mảng nguyên a có n phần tử. Tìm các dãy con có tổng bằng 0
    Ví dụ:
    3 4 -7 3 1 3 3 1 -4 -2 -2
    ➔
    {3 4 -7}
    {4 -7 3}
    {-7 3 1 3}
    {3 1 -4}
    {3 4 -7 3 1 3 3 1 -4 -2 -2 }
*/
#include <iostream>
#define MAX_NUMBERS 100
// #define DEBUG
using namespace std;

int main() {
    #ifndef DEBUG
        int n;
        cout << "Nhap n (do dai mang): ", cin >> n;

        int a[MAX_NUMBERS];
        for(int i = 0; i < n; i++) {
            cout << "Nhap a[" << i << "] = ", cin >> a[i];
        }
    #else
        int a[] = {3, 4, -7, 3, 1, 3, 3, 1, -4, -2, -2, 0};
        int n = sizeof(a) / sizeof(*a);
    #endif
    
    cout << "Result:\n";
    int sum, j;
    for(int i = 0; i < n; i++) {
        sum = a[i];
        j = i + 1; 
        while(sum != 0 && j < n) {
            sum += a[j];
            j++;
        }
        if(sum == 0) {
            cout << "{";
            for(int u = i, v = j - 1; u < j; u++) {
                cout << a[u];
                if(u != v) cout << ", ";
            } 
            cout << "}\n";
        }
    }
    system("pause");
    return 0;
}