/*
    File: Bai17.cpp
    Author: Trung Tin Nguyen
    Date: 18.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Cho mảng nguyên a có n phần tử. Tìm 2 phần tử trong mảng có tích lớn nhất
*/

#include <iostream>
// #define DEBUG
#define MAX_NUMBERS 100
using namespace std;

void output(int a, int b) {
    cout << "{" << a << "," << b << "}" << endl;
}
int main() {
    #ifndef DEBUG
        int n;
        cout << "Nhap n (do dai mang): ", cin >> n;

        int a[MAX_NUMBERS];
        for(int i = 0; i < n; i++) {
            cout << "Nhap a[" << i << "] = ", cin >> a[i];
        }
    #else
        int a[] = {3, 4, -7, 3, 1, 3, 3, 1, -4, -2, -2};
        int n = sizeof(a) / sizeof(*a);
    #endif

    int 
        max = a[0], 
        premax = max,
        min = a[0],
        premin = min;

    for(int i = 1; i < n; i++) {
        if(a[i] > max) {
            premax = max;
            max = a[i];
        }
        if(a[i] < min) {
            premin = min;
            min = a[i];
        }
    }
    int mulMin = min * premin;
    int mulMax = max * premax;

    if(mulMin > mulMax) output(min, premin);
        else output(max, premax);

    // cout << (mulMin > mulMax) << endl;
    system("pause");
    return 0;
}