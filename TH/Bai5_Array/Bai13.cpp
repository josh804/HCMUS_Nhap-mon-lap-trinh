/*
    File: Bai13.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Trộn 2 mảng một chiều a, b (đã xếp không giảm) thành một mảng một chiều cũng có
    thứ tự không giảm (a, b có thể chứa số lượng phần tử khác nhau).
    Ví dụ:
        Mảng A: 3 5 12 67 80 87 678
        Mảng B: 5 23 34 45 56 67
        Mảng kết quả: 3 5 5 12 23 34 45 56 67 67 80 87 678
*/

#include <iostream>
#define MAX_NUMBERS 100
// #define DEBUGGING
using namespace std;

void input(long a[], long &n, char c1, char c2) {
    do
        cout << "Nhap " << c1 << ": ", cin >> n;
    while(n <= 0);
    
    for(long i = 0; i < n; i++) {
        cout << c2 << "[" << i << "] = ", cin >> a[i];
    }        
}
void output(long a[], long n) {    
    for(long i = 0; i < n; i++) cout << a[i] << " ";    
}
void insert(long value, long destination[], long &length, long pos) {
    for(long i = length + 1; i >= pos; i--) {
        destination[i] = destination[i-1];
    }
    destination[pos] = value;
    length++;
}
int main() {
    #ifdef DEBUGGING
        long 
            a[MAX_NUMBERS], 
            b[] = {2, 4, 6, 7};

        long 
            n = 8, 
            m = sizeof(b) / sizeof(*b);  
 
        // a[] = {3, 4, 6, 6, 6, 8, 9, 10}
        a[0] = 3,   a[1] = 4,   a[2] = 6, 
        a[3] = 6,   a[4] = 6,   a[5] = 8, 
        a[6] = 9,   a[7] = 10;                      

    #else
        long
            a[MAX_NUMBERS], 
            b[MAX_NUMBERS],
            n, m;        

        input(a, n, 'n', 'a');
        input(b, m, 'm', 'b');            
    #endif

    if(b[0] < a[0]) {
        insert(b[0], a, n, 0);
    }
    //Solve
    long 
        i = 0,
        j = 1;

    while(j != m) {
        while(!(a[i] <= b[j] && b[j] <= a[i+1])) {
            i++;
        }
        insert(b[j], a, n, i + 1);
        j++;
    }

    cout << "Mang da gop: \n";
    output(a, n);
    system("pause");
    return 0;
}