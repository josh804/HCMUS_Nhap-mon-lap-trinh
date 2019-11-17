/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai11: Viết chương trình nhập vào giờ và thứ trong tuần của vé xem phim. Cho biết giá vé
xem phim.
*/

#include <iostream>
using namespace std;

int main() {
    short hour, dayOfWeek;
    cout << "Nhap gio: ", cin >> hour;
    cout << "Nhap thu (1: chu nhat, 2: thu hai.... 7: thu 7): ", cin >> dayOfWeek;

    unsigned int price;

    switch(dayOfWeek) {
        case 2:
        case 4: 
        case 5:
            if(hour >= 0 && hour < 17) price = 60000;
                else price = 70000;
            break;
        case 6:
        case 7: 
        case 1:
            if(hour >= 0 && hour < 17) price = 75000;
                else price = 80000;            
            break;
        case 3:
            price = 50000;
    }

    cout << "Gia ve: " << price;
    return 0;
}