/*
    File: Bai03.cpp
    Author: Trung Tin Nguyen
    Date: 14.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Viết thủ tục giải phương trình trùng phương bậc 4
*/

#include <iostream>
#include <cmath>
using namespace std;

void Calculate(double a, double b, double c)
{
    if(a == 0) {
        cout << "Day khong phai la phuong trinh bac 4 trung phuong.";
        return;
    }

    double delta = pow(b, 2) - (4 * a * c);
    if(delta > 0) {
        cout << "Phuong trinh co nghiem phan biet: " << endl;
        double t1 = (-b + sqrt(delta)) / (2 * a);
        double t2 = (-b - sqrt(delta)) / (2 * a);

        if(t1 < 0 && t2 < 0) {
            cout << "Phuong trinh vo nghiem";
            return;
        }

        double x1 = sqrt(t1);
        double x2 = -x1;
        double x3 = sqrt(t2);
        double x4 = -x3;

        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
        cout << "x3 = " << x3 << endl;        
        if(x3 != 0) {
            cout << "x4 = " << x4 << endl;
        }
    }
    else if(delta == 0) {
        double t = -b / (2 * a);
        if(t <= 0) {
            cout << "Phuong trinh vo nghiem" << endl;
        } 
        else {
            cout << "Phuong trinh co nghiem: ";
            double x1 = sqrt(t);
            double x2 = -x1;

            cout << "x1 = " << x1 << endl;
            cout << "x2 = " << x2 << endl;
        }
    }
    else {
        cout << "Phuong trinh vo nghiem.";
    }
    return;
}
int main()
{
    double a, b, c;

    cout << "Nhap a: ", cin >> a;
    cout << "Nhap b: ", cin >> b;
    cout << "Nhap c: ", cin >> c;

    // double x = 3;
    // int n = 4;
    // Expect value: -60
    Calculate(a, b, c);

    // cout << "Result: " << result << endl;
    cout << endl;
    system("pause");
    return 0;
}