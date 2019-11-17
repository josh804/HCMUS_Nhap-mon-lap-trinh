/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex04: Viết chương trình để người dùng nhập vào số thực là chiều dài và chiều rộng của
hình chữ nhật. Xuất ra chu vi và diện tích của hình chữ nhật trên (làm tròn đến 4 chữ
số thập phân.)
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float chieuDai, chieuRong;

    cout << "Chieu dai hinh chu nhat = ", cin >> chieuDai;
    cout << "Chieu rong hinh chu nhat = ", cin >> chieuRong;

    float 
        chuVi = (chieuDai + chieuRong) * 2, 
        dienTich = chieuDai * chieuRong;

    cout << setprecision(4) << fixed;
    cout << "Chu vi hinh chu nhat = " << chuVi << endl;
    cout << "Dien tich hinh chu nhat = " << dienTich << endl;

    return 0;
}