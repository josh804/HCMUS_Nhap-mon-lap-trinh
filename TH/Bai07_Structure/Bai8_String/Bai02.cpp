#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;
	cout << "Nhap chuoi: ", cin >> s;

	int dest = s.length();
	int i = dest;
	s = ' ' + s;

	// Remove whitespaces
	while (s.back() == ' ') {
		s.back() = '\0';
	}

	int j;
	while (i != -1) {
		// Do things
		while (s[i] != ' ') 
			i--;
		for (j = i + 1; j <= dest; j++)
			cout << s[j];
		i--;
		dest = i;
		cout << " ";
	}

	cout << '\n';
	system("pause");
	return 0;
}