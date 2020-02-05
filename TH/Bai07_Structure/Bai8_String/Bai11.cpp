#include <iostream>
#include <string>
using namespace std;

void solve(string &s, string w1, string w2) {
	int found = s.find(w1);
	while (found != string::npos) {
		s.replace(s.find(w1), w1.length(), w2);
		found = s.find(w1);
	}
}
int main() {
	string s;
	string w1, w2;

	cout << "Nhap chuoi: ";
	getline(cin, s);
	cout << "Nhap w1: ";
	getline(cin, w1);
	cout << "Nhap w2: ";
	getline(cin, w2);

	solve(s, w1, w2);

	cout << s << endl;
	system("pause");
	return 0;
}