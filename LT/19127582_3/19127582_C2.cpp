/*
    File: 19127582_C2.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Write a program that prompts the user to enter the squared lengths of three straight lines,
and then informs the user whether these lines form a valid triangle. Furthermore, if there is
a valid triangle, the program informs the user which type of triangle it is (normal,
equilateral, isosceles, right, 45°–45°–90°).
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isTriangleValid(double a, double b, double c) {
    return (a + b > c && a + c > b && b + c > a);
}
bool isTriangleRight(double a, double b, double c) {
    return (pow(a, 2) + pow(b, 2) == pow(c, 2) || pow(a, 2) + pow(c, 2) == pow(b, 2) 
    || pow(c, 2) + pow(b, 2) == pow(a, 2));
}
bool isTriangleEquilateral(double a, double b, double c) {
    return (a == b && a == c && b == c);
}
bool isTriangleIsosceles(double a, double b, double c) {
    return (a == b || b == c || c == a);
}
int main() {
    double a, b, c;
    cout << "Nhap binh phuong do dai duong thang thu nhat: ", cin >> a;
    cout << "Nhap binh phuong do dai duong thang thu hai: ", cin >> b;
    cout << "Nhap binh phuong do dai duong thang thu ba: ", cin >> c;

    a = sqrt(a);
    b = sqrt(b);
    c = sqrt(c);

    if(!isTriangleValid(a, b, c)) {
        cout << "Ba do dai canh da nhap khong tao thanh mot tam giac.";
    } 
    else {
        cout << "Ba do dai canh tao thanh mot tam giac hop le." << endl;
        if(isTriangleRight(a, b, c)) {
            if(isTriangleEquilateral(a, b, c)) {
                cout << "Tam giac da nhap la tam giac vuong can (1 goc 90, 2 goc 45).";
            }
            else {
                cout << "Tam giac da nhap la tam giac vuong.";
            }
        }
        else if(isTriangleEquilateral(a, b, c)) {
            cout << "Tam giac da nhap la tam giac deu.";
        }
        else if(isTriangleIsosceles(a, b, c)) {
            cout << "Tam giac da nhap la tam giac can.";
        }
        else {
            cout << "Tam giac da nhap la tam giac thuong";
        }
    }
    
    cout << endl;
    system("pause");
    return 0;
}