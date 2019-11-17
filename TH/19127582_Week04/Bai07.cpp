/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai07: Nhập vào 3 số a, b, c (nguyên, khác nhau). In ra theo thứ tự tăng dần.
*/
#include <iostream>

using namespace std;

int main() {
	int a, b, c, temp;
	cout << "Nhap a: ", cin >> a;
	cout << "Nhap b: ", cin >> b;
	cout << "Nhap c: ", cin >> c;

	if (a > b) {
		temp = b;
		b = a;
		a = temp;
	}
	if (a > c) {
		temp = c;
		c = a;
		a = temp;
	}
	if (b > c) {
		temp = c;
		c = b;
		b = temp;
	}

	cout << "Sau khi sap xep: " << a << " " << b << " " << c << endl;

	return 0;
}