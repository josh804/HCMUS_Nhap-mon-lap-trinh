/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai04: Viết chương trình nhập vào một số. In ra cách đọc (tiếng Anh) của chữ số đó.
In ra Zero, One, Two, Three, Four, Five, Six, Seven, Eight, Nine tương ứng với các
số từ 0 đến 9. Ngược lại in ra Unknown

*/

#include <iostream>

using namespace std;

int main() {
	int number;
	cout << "Nhap vao mot so: ", cin >> number;
	switch (number) {
	case 0:
		cout << "Zero";
		break;
	case 1:
		cout << "One";
		break;
	case 2:
		cout << "Two";
		break;
	case 3:
		cout << "Three";
		break;
	case 4:
		cout << "Four";
		break;
	case 5:
		cout << "Five";
		break;
	case 6:
		cout << "Six";
		break;
	case 7:
		cout << "Seven";
		break;
	case 8:
		cout << "Eight";
		break;
	case 9:
		cout << "Nine";
		break;
	default:
		cout << "Unknown";
	}
	
	cout << endl;
	return 0;
}