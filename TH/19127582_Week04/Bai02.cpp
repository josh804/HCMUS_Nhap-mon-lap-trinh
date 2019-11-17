/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai02: Viết chương trình nhập vào điểm Toán, Lý, Hóa. Xuất ra điểm trung bình và cho
biết rằng SV này đậu hay rớt. Biết rằng điểm Toán có hệ số 2. SV đậu khi điểm
trung bình >= 5, và không có môn nào 0 điểm
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	float fToan, fLy, fHoa;

	cout << "Nhap diem toan: ", cin >> fToan;
	cout << "Nhap diem ly: ", cin >> fLy;
	cout << "Nhap diem hoa: ", cin >> fHoa;

	float fAverage = (fToan * 2 + fLy + fHoa) / 4;
	cout << setprecision(2) << fixed;
	cout << "Diem trung binh: " << fAverage << endl;
	
	if (fAverage < 5 || fToan == 0 || fLy == 0 || fHoa == 0) {
		cout << "Sinh vien rot!";
	}
	else {
		cout << "Sinh vien dau!";
	}

	return 0;
}