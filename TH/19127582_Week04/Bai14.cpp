/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai14:
    Tính tiền thuê phòng khi biết số ngày thuê và loại phòng (một trong 3 loại A, B hoặc
C) với qui định như sau
*/

#include <iostream>
using namespace std;

int main()
{
    unsigned int day;
    char roomType;
    cout << "Nhap so ngay thue phong: ", cin >> day;
    cout << "Nhap loai phong can thue (A, B, C): ", cin >> roomType;

    unsigned int price;
    switch (roomType)
    {
    case 'A':
        price = day * 450000;
        break;
    case 'B':
        price = day * 350000;
        break;
    case 'C':
        price = day * 250000;
        break;
    }

    if (day > 12)
        if (roomType = 'A')
            price *= 10 / 100;
        else 
            price *= 8 / 100;

    cout << "Tong tien phai tra: " << price << endl;

    return 1;
}