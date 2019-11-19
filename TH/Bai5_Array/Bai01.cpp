/*
    File: Bai01.cpp
    Author: Trung Tin Nguyen
    Date: 16.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Nhập mảng số nguyên có N phần tử, tìm số chẵn lớn nhất và số lẻ nhỏ nhất.
*/

#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int theBiggestEven(int arr[], int n) {
    int max = INT_MIN;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0 && arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int theSmallestOdd(int arr[], int n) {
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 != 0 && arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}
int main() {
    int arr[1000], n;
    do
        cout << "Nhap n: ", cin >> n;
    while(n <= 0);

    bool 
        checkEven   =   false, 
        checkOdd    =   false;    

    for(int i = 0; i < n; i++) {
        cout << "n[" << i << "] = ", cin >> arr[i];
        if(arr[i] % 2 == 0) checkEven = true;
        if(arr[i] % 2 != 0) checkOdd = true; 
    }

    if(!checkEven) cout << "Mang khong chua phan tu la so chan.\n";
    else {
        int result = theBiggestEven(arr, n);
        cout << "Phan tu chan lon nhat: " << result << endl;
    }

    if(!checkOdd) cout << "Mang khong chua phan tu la so le.\n";
    else {
        int result = theSmallestOdd(arr, n);
        cout << "Phan tu le be nhat: " << result << endl;
    }

    system("pause");
    return 0;
}