/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex09: Viết chương trình nhập vào 4 số. Xuất ra giá trị trung bình của 4 số này.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float a, b, c, d;
    cout << "a = ", cin >> a;
    cout << "b = ", cin >> b;
    cout << "c = ", cin >> c;
    cout << "d = ", cin >> d;
    
    cout << setprecision(4) << fixed;

    float averageValue = (a + b + c + d) / 4;

    cout << "Gia tri trung binh = " << averageValue << endl;

    return 0;
}