/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex05: Viết chương trình để người dùng nhập vào số thực là nhiệt độ Fahrenheit (F). Xuất
ra nhiệt độ trên tính theo Celsius (C).
Biết rằng: C = (F-32)* 5/9
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float fahrenheit;
    cout << "Nhap nhiet do Fahrenheit (F) = ", cin >> fahrenheit;

    cout << setprecision(4) << fixed;
    cout << "Nhiet do Celsius = " << (fahrenheit-32)* 5/9 << endl;

    return 0;
}