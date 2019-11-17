/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai11: Viết chương trình nhập vào số km taxi. Tính tiền taxi phải trả.
    1. km1 giá 15k.
    2. km2 đến km5 giá 13.5k.
    3. km5 trở đi giá 11k.
    4. Nếu đi trên 12km được giảm 10% tổng tiền.
*/

#include <iostream>
using namespace std;

int main() {
    double km;
    cout << "Nhap vao so km taxi: ", cin >> km;

    unsigned int price {0};
    bool saleOff = (km >= 12.0);
    // Km thu nhat
    if(km - 1 > 0) {
        km = km - 1;
        price += 15000;
    }
    // Tu km thu 2 -> 4
    char attemp = 3;
    while(attemp != 0 && km - 1 > 0) {
        attemp--;
        km = km - 1;
        price += 13500;
    }
    // Km thu 5 tro di
    while(km - 1 > 0) {
        attemp--;
        km = km - 1;
        price += 11000;
    }
    if(saleOff) price = price * 90 / 100;

    cout << price << endl;
    return 0;
}