#include <iostream>
#include <cmath>
using namespace std;

long square(long n) {
	return pow(n , 2);
}
long calculate(long n) {
	if (n == 1) return 1;
	return calculate(n - 1) + square(n);
}
int main() {
	long n;
	cin >> n;

	cout << calculate(n);
	cout << endl;
	system("pause");
	return 0;
}