/*
    File: Bai11.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập mảng một chiều có n phần tử là những số nguyên dương. In dãy con tăng dần
        (liên tiếp) dài nhất xuất hiện trong mảng. Nếu có nhiều dãy cùng dài nhất thì chỉ cần
        in ra một trong số đó.
*/

#include <iostream>
using namespace std;
#define MAX_NUMBERS 100
#define DEBUG

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

        int s[MAX_NUMBERS];
    #else
        int a[] = {5, 12, 67, 45, 87, 678, 3};
        int n = sizeof(a) / sizeof(*a);
        int s[sizeof(a) / sizeof(*a)];
    #endif

    s[0] = 1;    
    int 
        i = 0,
        j = 0;

    int trace[MAX_NUMBERS];
    
    trace[0] = -1;
    while(i < n) {        
        while(j < n) {
            j++;
            if(a[j] >= a[j - 1]) {
                s[j] = s[j - 1] + 1;
                trace[j] = trace[j - 1];
            }
            else {
                s[j] = 1;
                i = j;
                trace[i] = -1;
                break;
            }
        }
    }
    system("pause");
    return 0;
}