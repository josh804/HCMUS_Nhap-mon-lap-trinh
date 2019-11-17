/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai15:
    Nhập vào 1 số nguyên, yêu cầu xuất ra chữ số hàng trăm của số đó, nếu không có thì
xuất ra 0
*/

#include <iostream>
using namespace std;

int main() {
    long x;
    cout << "Nhap vao mot so nguyen: ", cin >> x;
    if(x / 100 > 0) {
        cout << x / 100 % 10;
    }
    else {
        cout << 0;
    }

    cout << endl;
    return 0;
}