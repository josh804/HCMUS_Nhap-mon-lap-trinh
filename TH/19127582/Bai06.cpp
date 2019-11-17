/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex06: Viết chương trình để người dùng nhập vào số thực là chiều dài tính theo miles. Xuất
ra chiều dài trên theo kilometer
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float chieuDai;
    cout << "Chieu dai (m) = ", cin >> chieuDai;

    cout << setprecision(4) << fixed;
    cout << "Sau chuyen doi (km): " << chieuDai / 1000 << endl;

    return 0;
}