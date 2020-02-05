#include <iostream>
using namespace std;

// defines
struct Date {
	short day;
	short month;
	short year;
};

// functions
void Instruct(int n) {
	cout << "\n\n\n\n\n----- Phan huong dan ------\n";
	switch (n) {
		case 1: {
			cout << "- Nhap vao mot ngay.\n";
			cout << "Chuong trinh se:\n";
			cout << "\t- Xuat ra ngay (DD-MM-YY).\n";
			cout << "\t- Kiem tra nam nhuan.\n";
			cout << "\t- Tinh so thu tu ngay trong nam.\n";
			break;
		}
		case 2: {
			cout << "- Nhap vao nam va so thu tu cua ngay do trong nam.\n";
			cout << "Chuong trinh se:\n";
			cout << "\t- Tra ve ngay tuong ung\n";
			break;
		}
		case 3: {
			cout << "- Nhap vao mot ngay.\n";
			cout << "Chuong trinh se:\n";
			cout << "\t- Tim ngay ke tiep\n";
			cout << "\t- Tim ngay hom qua\n";
			break;
		}
		case 4: {
			cout << "- Nhap vao k, chuong trinh se tinh: \n";
			cout << "\t- Ke do k ngay\n";
			break;
		}
		case 5: {
			cout << "- Nhap vao k, chuong trinh se tinh: \n";
			cout << "\t- Truoc do k ngay\n";
			break;
		}
		case 6: {
			cout << "- Nhap vao hai ngay.\n";
			cout << "Chuong trinh se:\n";
			cout << "\t- In ra khoang cach cua 2 ngay vua nhap\n";
		}
	}
	cout << "-------------------------\n";
}
void InputDate(Date &time) {
	cout << "Nhap ngay: ", cin >> time.day;
	cout << "Nhap thang: ", cin >> time.month;
	cout << "Nhap nam: ", cin >> time.year;
}
void PrintDate(Date time) {
	if (time.day < 10) cout << 0;
	cout << time.day << "-" << time.month << "-" << time.year << endl;
}
bool IsLeapYear(int year) {
	return year % 4 == 0 && year % 100 != 0 || year % 400 == 0;
}
int NumericalOfDay(Date time, short dom[]) {
	if (IsLeapYear(time.year)) dom[2] = 29;
		else dom[2] = 28;

	int result { 0 };
	for (int i = 1; i < time.month; i++) {
		result = result + dom[i];
	}
	return result + time.day;
}
void InputYYND(int &year, int &daynum) {
	cout << "Nhap nam: ", cin >> year;
	cout << "Nhap so thu tu ngay trong nam: ", cin >> daynum;
}
void PrintDate(int year, int daynum, short dom[]) {
	// Init
	if (IsLeapYear(year)) dom[2] = 29;
	else dom[2] = 28;

	Date time;
	int i = 1;
	time.month = 1;

	// Do stuffs
	while (daynum - dom[i] > 0) {
		daynum = daynum - dom[i];
		time.month = time.month + 1;
		i++;
	}
	time.day = daynum;
	time.year = year;

	// Output
	cout << time.day << "-" << time.month << "-" << time.year << endl;
}
Date FindNext(Date time, int x, short dom[]) {
	if (IsLeapYear(time.year)) dom[2] = 29;
	else dom[2] = 28;

	int n = time.day + x; 
	// 18-4 -> sau 50 ngay -> 50+18=68. thang 4 co 30 ngay, 68-30=38, 5 -> 31ngay, 38-31=7, 7/6
	while (n > dom[time.month]) {
		n -= dom[time.month];
		if (time.month == 12) {
			time.month = 1;
			time.year++;
			if (IsLeapYear(time.year)) dom[2] = 29;
		}
		else {
			time.month++;
		}
	}
	time.day = n;

	return time;
}
Date FindPrev(Date time, int x, short dom[]) {
	if (IsLeapYear(time.year)) dom[2] = 29;
	else dom[2] = 28;

	int n = time.day - x;
	while (n < 0) {
		n += dom[time.month];
		if (time.month == 1) {
			time.month = 12;
			time.year--;
			if (IsLeapYear(time.year)) dom[2] = 29;
		}
		else {
			time.month--;
		}
	}
	time.day = n;
	return time;
}
int GetDistance(Date t1, Date t2, short dom[]) {
	int distance = 0, count = abs(t1.year - t2.year);
	while(t1.year != t2.year) {
		if(t1.year > t2.year) {
			distance += 365 + IsLeapYear(t2.year) - NumericalOfDay(t2, dom);
			t2.day = 1;
			t2.month = 1;
			t2.year++;
		}
		else if(t1.year < t2.year) {
			distance += 365 + IsLeapYear(t1.year) - NumericalOfDay(t1, dom);
			t1.day = 1;
			t1.month = 1;
			t1.year++;
		}
	}

	if (t1.year == t2.year) distance += abs(NumericalOfDay(t1, dom) - NumericalOfDay(t2, dom)) + count;
	return distance;
}
int Compare(Date t1, Date t2) {
	if(t1.year < t2.year) return -1;
	if(t1.year > t2.year) return 1;
	
	// t2.year = t1.year
	if(t1.month < t2.month) return -1;
	if(t1.month > t2.month) return 1;

	// t2.month = t1.month
	if(t1.day == t2.day) return 0;

	return (t1.day < t2.day) ? -1 : 1; 
}
// main
int main() {
	// Main init
	short dayofmonth[] = {
		0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
	};
	Date time;
	int k;

	// Section 1
	Instruct(1);
	InputDate(time);
	PrintDate(time);
	if (IsLeapYear(time.year)) cout << "Ngay do thuoc nam nhuan.\n";
	else cout << "Ngay do khong thuoc nam nhuan\n";
	cout << "So thu tu cua ngay trong nam: " << NumericalOfDay(time, dayofmonth) << endl;
	
	// Section 2
	Instruct(2);
	int year;
	int daynum;
	InputYYND(year, daynum);
	PrintDate(year, daynum, dayofmonth);
	
	// Section 3
	Instruct(3);
	InputDate(time);
	cout << "Ngay ke tiep: ", PrintDate(FindNext(time, 1, dayofmonth));
	cout << "Ngay truoc do: ", PrintDate(FindPrev(time, 1, dayofmonth));

	// Section 4
	Instruct(4);
	InputDate(time);
	cout << "Nhap vao k: ", cin >> k;
	cout << "Ke do "<<k<<" ngay: ", PrintDate(FindNext(time, k, dayofmonth));

	// Section 5
	Instruct(5);
	InputDate(time);
	cout << "Nhap vao k: ", cin >> k;
	cout << "Truoc do " << k << " ngay: ", PrintDate(FindPrev(time, k, dayofmonth));

	// Section 6
	Date t1, t2;
	Instruct(6);
	InputDate(t1);
	InputDate(t2);

	cout << "Day distance between t1 and t2: " << GetDistance(t1, t2, dayofmonth) << endl;
	cout << "So sanh t1 va t2: " << Compare(t1, t2);	
	system("pause");
	return 0;
}