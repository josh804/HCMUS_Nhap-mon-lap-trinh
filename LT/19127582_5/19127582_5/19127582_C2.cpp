#include <iostream>
using namespace std;

void ShowTable(int n) {
	cout << '\t';
	for (int i = 1; i <= 10; i++) {
		cout << i << '\t';
	}
	cout << endl << n << '\t';
	for (int i = 1; i <= 10; i++) {
		cout << n * i << '\t';
	}

	return;
}
int main() {
	int n;
	cin >> n;

	ShowTable(n);
	cout << endl;
	system("pause");
	return 0;
}