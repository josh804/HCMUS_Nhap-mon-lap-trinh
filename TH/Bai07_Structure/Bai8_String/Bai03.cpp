#include <iostream>
#include <string>
using namespace std;

void solve(string str) {
	short i = 0;

	//cout << "String: " << str << endl << "Length: " << str.length() << endl;
	short l = str.length();
	while (i <= l) {
		while (i < l && str[i] == ' ') i++;

		cout << char(toupper(str[i++]));
		while (i < l && str[i] != ' ') cout << char(tolower(str[i++]));

		cout << ' ';
	}
}

int main() {
	string str;
	cout << "Nhap chuoi: ";
	getline(cin, str);

	solve(str);
	cout << endl;
	system("pause");
	return 0;
}