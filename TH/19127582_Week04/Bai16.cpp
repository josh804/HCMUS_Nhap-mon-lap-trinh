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
    unsigned short number;
    do {
        cout << "Nhap so nguyen n gom 3 chu so: ", cin >> number;
    }
    while(number / 100 > 9 || number / 100 == 0);

    char max = 0; 
    char phan_du;
    while(number % 10 > 0) {
        phan_du = number % 10;
        if(phan_du > max) max = phan_du;
        number = number / 10;
    }

    cout << "Chu so lon nhat: ";
    cout << (int) max << endl;

    return 0; 
}