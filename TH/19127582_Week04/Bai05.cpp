/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
	Bai05: Viết chương trình nhập vào hai số thực a, b. Giải phương trình ax + b = 0
Chú ý: xét tất cả các nhiều trường hợp. Ví dụ: a = 0, a!=0
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double a, b;
	cout << "Nhap a: ", cin >> a;
	cout << "Nhap b: ", cin >> b;

	cout << setprecision(2) << fixed;
	if (a == 0) {
		if (b == 0) {
			cout << "Phuong trinh co vo so nghiem.";
		}
		else {
			cout << "Phuong trinh vo nghiem.";
		}
	}
	else {
		cout << "Phuong trinh co nghiem duy nhat: x = " << -b / a;
	}

	cout << endl;

	return 0;
}