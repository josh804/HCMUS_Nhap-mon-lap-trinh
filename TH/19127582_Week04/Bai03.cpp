/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai03: Viết chương trình nhập vào điểm trung bình của một sinh viên. Cho biết xếp loại của
sinh viên đó.
*/
#include <iostream>

using namespace std;

int main() {
	double fAverage;

	cout << "Nhap diem trung binh cua sinh vien: ", cin >> fAverage;
	cout << "Xep loai sinh vien: ";

	if (fAverage < 5) {
		cout << "Below Average";
	}
	else if (fAverage < 6) {
		cout << "Average";
	}
	else if (fAverage < 7) {
		cout << "Above Average";
	}
	else if (fAverage < 8) {
		cout << "Good";
	}
	else if (fAverage < 9) {
		cout << "Excellent";
	}
	else if (fAverage < 10) {
		cout << "Outstanding";
	}
	else {
		cout << "Status's not found.";
	}

	cout << endl;
	return 0;
}