/*
    File: Bai07.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Nhập mảng một chiều có n phần tử là những số nguyên. Đếm số lượng các phần tử
    khác nhau có trong mảng.
        Ví dụ: 3 5 12 5 45 87 678 5 ➔6
*/

#include <iostream>
#include <cstring>
// #define DEBUG
#define MAX_NUMBERS 100
using namespace std;

int main()
{
    #ifndef DEBUG
        int n;
        do
            cout << "Nhap n: ", cin >> n;
        while (n <= 0);

        int a[MAX_NUMBERS], count = 0;
        bool checked[MAX_NUMBERS];
        memset(checked, false, sizeof(checked));

        for (int i = 0; i < n; i++)
            cout << "a[" << i << "] = ", cin >> a[i];
    #else
        int a[] = {3, 5, 12, 5, 45, 87, 678, 5};
        int n = sizeof(a) / sizeof(*a);
        int count = 0;
        bool checked[MAX_NUMBERS];
        memset(checked, false, sizeof(checked));
    #endif

    for (int i = 0; i < n; i++) {
        if (checked[a[i]] == false) {
            count++;
            checked[a[i]] = true;
        }
    }

    cout << count << endl;
    system("pause");
    return 0;
}