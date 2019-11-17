/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex01: Viết chương trình in ra kích thước của các kiểu dữ liệu cơ bản: bool, char, short, int,
    long, long long, float, double, long double
*/

#include <iostream>
using namespace std;

int main() {
    cout << "bool: " << sizeof(bool) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "short: " << sizeof(short) << endl;
    cout << "int: " << sizeof(int) << endl;
    cout << "long: " << sizeof(long) << endl;
    cout << "long long: " << sizeof(long long) << endl;
    cout << "float: " << sizeof(float) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "long double: " << sizeof(long double) << endl;

    return 0;
}