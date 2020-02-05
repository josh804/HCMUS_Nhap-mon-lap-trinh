#include <iostream>
#include <string>
using namespace std;

string formatNumber(string s) {
	int i = 3;
	int length = s.length();

	while (length - i > 0) {
		s.insert(length - i, ",");
		i += 3;
	}

	return s;
}

int main() {
	string s;
	cout << "Nhap so can format: ";
	getline(cin, s);

	cout << formatNumber(s) << endl;

	system("pause");
	return 0;
}