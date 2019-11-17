/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai01: Viết chương trình nhập vào hai số nguyên a, b. Tìm số nhỏ hơn và in ra màn hình.
*/

#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "Nhap a = ", cin >> a;
	cout << "Nhap b = ", cin >> b;

	int min = (a < b) ? a : b;
	cout << "So nho hon: " << min << endl;

	return 0;
}