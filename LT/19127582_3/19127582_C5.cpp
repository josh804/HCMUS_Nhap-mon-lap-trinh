/*
    File: 19127592_C5.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Write a program that prompts the user to enter three real numbers, a, b and c, and then
informs the user the solution(s) of the quadratic equation ax2 + bx + c = 0. The program must
consider every case of a, b and c.
*/

#include <iostream>
#include <cmath>
using namespace std;

void calculate(double a, double b, double c) {
    double delta = pow(b, 2) - 4 * a * c;
    if(delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);          

        cout << "Phuong trinh co 2 nghiem phan biet:\n";
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if(delta == 0) {
        double x = -b / (2 * a);
        cout << "Phuong trinh co nghiem kep:\nx = " << x;        
    }
    else {
        cout << "Phuong trinh vo nghiem.";
    }
}
int main() {
    double a, b, c;
    cout << "Nhap a: ", cin >> a;
    cout << "Nhap b: ", cin >> b;
    cout << "Nhap c: ", cin >> c;

    calculate(a, b, c);
    cout << endl;
    system("pause");
    return 0;
}