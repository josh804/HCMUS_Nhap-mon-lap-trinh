/*
    File: Bai14.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Cho hai mảng a và b có lần lượt m và n phần tử. Tìm những giá trị cùng xuất hiện
        trên hai mảng.
        Ví dụ:
            A: 3 5 12 67 80 45 678
            B: 5 23 12 45 56 67
            Mảng kết quả: 5 12 67 45
*/

#include <iostream>
#include <cstring>
#define MAX_NUMBERS 100
using namespace std;

void input(int a[], int &n, char c1, char c2) {
    do
        cout << "Nhap " << c1 << ": ", cin >> n;
    while(n <= 0);
    
    for(long i = 0; i < n; i++) {
        cout << c2 << "[" << i << "] = ", cin >> a[i];
    }        
}
void removeElement(int a[], int &length, int pos) {
    for(int i = pos; i < length; i++) {
        a[i] = a[i+1];
    }
    --length;
}
void removeDuplicateElement(int a[], int &length) {
    int i = 0;
    while(i != length) {
        int j = i + 1;
        while(j != length) {
            while(a[j] != a[i] && j != length) {
                j++;
            }
            if(j != length) {
                removeElement(a, length, j);
            }
        }
        ++i;     
    }
}
int main() {
    int
        a[MAX_NUMBERS], 
        b[MAX_NUMBERS],
        n, m;

    input(a, n, 'n', 'a');
    input(b, m, 'm', 'b');
    
    removeDuplicateElement(a, n);    
    removeDuplicateElement(b, m);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            if(a[i] == b[j]) cout << a[i] << " ";
        }
    }

    // removeDuplicateElement(b);

    system("pause");
    return 0;
}