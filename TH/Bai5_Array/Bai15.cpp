/*
    File: Bai15.cpp
    Author: Trung Tin Nguyen
    Date: 19.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
    Cho mảng nguyên dương a, có n phần tử. Một số nguyên dương q. Tìm i,j sao cho
        a[i] +a[j] = q
    Ví dụ: n = 7, q = 12
    0 3 12 9 45 8 4 ➔ (0,2) (1,3) (5,6)
*/

#include <iostream>
using namespace std;

// #define DEBUG
#define MAX_NUMBERS 100

int sum(int a[], int tmp[], int length) {
    int result = 0;
    for(int i = 0; i < length; i++) {
        result += a[tmp[i]];
    }
    return result;
}
void recursive(int a[], int start, int end, int pos, int tmp[], int k, int q) {
    if(pos == k) {
        if(sum(a, tmp, k) == q) {
            cout << "(";
            for(int i = 0, j = k - 1; i < k; i++) {
                cout << tmp[i];
                if(i == 0) cout << ",";
            }
            cout << ") ";
        }

        return;
    }

    for(int i = start; i < end; i++) {
        tmp[pos] = i;
        recursive(a, i + 1, end, pos + 1, tmp, k, q);
    }
}
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

        int q;
        cout << "Nhap q: ", cin >> q;
    #else
        int a[] = {0, 3, 12, 9, 45, 8, 4}; 
        // expect output: (0,2) (1,3) (5,6)
        int n = sizeof(a) / sizeof(*a);
        int q = 12;
    #endif 

    int tmp[n];

    recursive(a, 0, n, 0, tmp, 2, q);

    cout << endl;
    system("pause");
    return 0;
} 