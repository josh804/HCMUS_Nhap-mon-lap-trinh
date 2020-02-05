#include <iostream>
using namespace std;

void fibonaci(int n) {
	int a[3] = {0, 1};

	cout << "1 ";
	int result;

	for (int i = 2; i <= n; i++) {
		result = a[0] + a[1];
		cout << result << " ";

		a[0] = a[1];
		a[1] = result;
	}

	return;
}
int main() {
	int n;
	cin >> n;

	fibonaci(n);
	system("pause");
	return 0;
}