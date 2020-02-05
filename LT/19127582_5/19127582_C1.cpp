#include <iostream>
using namespace std;

int fibonaci(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibonaci(n - 1) + fibonaci(n - 2);
}

int main() {
	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cout << fibonaci(i) << " ";
	}

	system("pause");
	return 0;
}