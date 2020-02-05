#include <iostream>
#include <string>
using namespace std;


void solve(string s, string w) {
	int result = s.find(w);
	if (result == std::string::npos) {
		cout << "Khong tim thay";
		return;
	}
	int count = 1;
	result = s.find(w, result + w.length());
	while (result != std::string::npos) {
		count++;
		result = s.find(w, result + w.length());
	}
	cout << "Tu " << w << " xuat hien " << count << " lan.";
}
int main() {
	string s, w;
	cout << "Nhap chuoi s: ";
	getline(cin, s);
	cout << "Nhap chuoi w: ";
	getline(cin, w);

	solve(s, w);

	system("pause");
	return 0;
}