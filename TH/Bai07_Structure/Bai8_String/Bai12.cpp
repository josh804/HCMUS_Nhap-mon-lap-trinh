#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct timestamp {
	short day;
	short month;
	short year;
};
struct Student {
	string fullName;
	double GPA{ 0.0 };
	int ID{ 0 };
	string address;
	timestamp dob{ 0, 0, 0 };
};

void input(Student &a) {
	cout << "Nhap ID: ", cin >> a.ID;
	cin.ignore(32767, '\n');

	cout << "Nhap ten day du: ");
	getline(cin, a.fullName);

	cout << "Nhap GPA: ", cin >> a.GPA;
	cin.ignore(32767, '\n');

	cout << "Nhap address: ";
	getline(cin, a.address);

	cout << "Nhap ngay sinh: ", cin >> a.dob.day;
	cout << "Nhap thang sinh: ", cin >> a.dob.month;
	cout << "Nhap nam sinh: ", cin >> a.dob.year;
}
void output(Student a, int type = 1) {
	if (type == 1)
		cout << "ID: " << a.ID << "\nFull name: " << a.fullName << "\nGPA: " << a.GPA
			<< "\nAddress: " << a.address
			<< "DoB: " << a.dob.day << "/" << a.dob.month << "/" << a.dob.year << endl;
	else 
	{
		string last, first;
		int found = a.fullName.find(" ");
		if (found != -1) {
			first = a.fullName.substr(0, found);
			last = a.fullName.substr(found);
		}
		else {
			first = last = "Unknown";
		}
		cout << "ID: " << a.ID 
			<< "\nFirst name: " << first 
			<< "\nLast name: " << last 
			<< "\nGPA: " << a.GPA 
			<< "\nAddress:" << a.address
			<< "DoB: " << a.dob.day << "/" << a.dob.month << "/" << a.dob.year << endl;
	}

}
void chooseMenu(int& option) {
	cout << "Nhap tuy chon: \n";
	cout << "";
}
timestamp getDayFromTimestamp(timestamp input, timestamp cur) {
	time_t now = time(0);
}
int main() {
	Student	michael;
	input(michael);

	int option{ -1 };
	chooseMenu(option);

	output(michael, 0);

	system("pause");
	return 0;
}