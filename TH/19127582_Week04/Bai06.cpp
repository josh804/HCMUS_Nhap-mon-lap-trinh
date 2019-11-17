/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
	Bai06: Viết chương trình nhập vào ba số thực a, b, c. Giải phương trình ax2 + bx + c = 0
Chú ý: xét tất cả các nhiều trường hợp. Ví dụ: a = 0, a!=0, b = 0….
*/
#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
	double a, b, c;
	cout << "Nhap a: ", cin >> a;
	cout << "Nhap b: ", cin >> b;
	cout << "Nhap c: ", cin >> c;

	cout << setprecision(2) << fixed;

	double delta = pow(b, 2) - 4 * a * c;

	if (delta < 0) {
		cout << "Phuong trinh vo nghiem.";
	}
	else if (delta == 0) {
		cout << "Phuong trinh co nghiem kep x = " << -b / (2 * a);
	}
	else {
		cout << "Phuong trinh co hai nghiem phan biet." << endl;
		cout << "x1 = " << (-b + sqrt(delta)) / (2 * a) << endl;
		cout << "x2 = " << (-b - sqrt(delta)) / (2 * a) << endl;
	}
	cout << endl;

	return 0;
}