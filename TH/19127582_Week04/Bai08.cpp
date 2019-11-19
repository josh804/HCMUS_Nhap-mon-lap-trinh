/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai08: Viết chương trình nhập vào một năm. Cho biết năm đó có phải năm nhuận hay không
*/
#include <iostream>

using namespace std;
int main() {
	int year;
	cout << "Nhap nam: ", cin >> year;

    if(year % 4 == 0 || (year % 100 == 0 && year % 400 == 0)) cout << "Nam nhuan";
        else cout << "Khong la nam nhuan"; 
    cout << endl;

	return 0;
}