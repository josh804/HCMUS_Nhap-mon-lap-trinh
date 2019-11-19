/*
    File: Bai18.cpp
    Author: Trung Tin Nguyen
    Date: 19.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Cho mảng nguyên a có n phần tử. Tìm phần tử xuất hiện nhiều hơn n/2 lần trong
    mảng
    Ví dụ: 2 8 7 2 2 5 2 3 1 2 2 ➔ 2
*/

#include <iostream>
#include <cstring>
using namespace std;
#define DEBUG
#define MAX_NUMBERS 100

int main() {
    #ifndef DEBUG
        int n;
        do
            cout << "Nhap n: ", cin >> n;
        while(n <= 0);

        int a[MAX_NUMBERS];

        for(int i = 0; i < n; i++) {
            cout << "a[" << i << "] = ", cin >> a[i];
        }
    #else
        int a[] = {2, 8, 7, 2, 2, 5, 2, 3, 1, 2, 2}; // expect output: 2
        int n = sizeof(a) / sizeof(*a);
    #endif  

    int 
        numbers[MAX_NUMBERS],
        count[MAX_NUMBERS];

    memset(count, 0, sizeof(count));
    for(int i = 0; i < n; i++) {
        
    }

    system("pause");
    return 0;
}