#include <iostream>
#include <string>
using namespace std;

bool isCharNumbered(char c) {
	return c >= '0' && c <= '9';
}

int countNumber(string str) {
	int i = 0;
	int length = str.length();
	int count = 0;

	while (i < length) {
		if (i < length && isCharNumbered(str[i])) {
			i++;
			count++;
			while (isCharNumbered(str[i])) {
				i++;
			}
		}
		i++;
		while (i < length && !isCharNumbered(str[i])) {
			i++;
		}
	}
	return count;
}

int main() {
	string str;
	cout << "Nhap chuoi: ";
	getline(cin, str);

	cout << "Number count: " << countNumber(str) << endl;


	system("pause");
	return 0;
}