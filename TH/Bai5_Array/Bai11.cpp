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
// #define DEBUG

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
        int a[] = {5, 12, 67, 99, 111, 22, 45, 87, 678, 22, 36666};
        int n = sizeof(a) / sizeof(*a);
        int s[sizeof(a) / sizeof(*a)];
    #endif

    s[0] = 1;    
    int 
        i = 0,
        j = 0;
    
    int 
        max = 0,
        previous;
    
    while(j < n || i < n) {
        previous = j;
        j++;
        if(a[j] >= a[previous])
            s[j] = s[previous] + 1;
        else {
            if(max < s[previous]) max = previous;
            s[j] = 1;
            i = j;
        }
    }
    
    for(int i = max - s[max] + 1; i <= max; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    system("pause");
    return 0;
}