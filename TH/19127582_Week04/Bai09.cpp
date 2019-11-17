/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai09: Viết chương trình nhập vào một tháng và một năm. Cho biết tháng đó có bao nhiêu
ngày
*/
#include <iostream>

using namespace std;

int main() {
	int year, month;
	cout << "Nhap thang: ", cin >> month;
	cout << "Nhap nam: ", cin >> year;

    unsigned short day;
    
    switch(month) {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day = 30;
        break;
    case 2: 
        day = 28;
        break;
    default: 
        day = 0;
    }

    if((year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)) && month == 2) day = 29; 
    
    cout << "Thang " << month << " co " << day << " ngay.";

    cout << endl;

	return 0;
}