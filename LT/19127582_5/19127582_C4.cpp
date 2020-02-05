#include <iostream>
#include <cmath>
using namespace std;

long gcd(long a, long b) {
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
long lcm(long a, long b) {
	return a * b / gcd(a, b);
}
int main() {
	long a, b;
	cout << "Nhap a: ", cin >> a;
	cout << "Nhap b: ", cin >> b;

	cout << "GCD: " << gcd(a, b) << endl;
	cout << "LCM: " << lcm(a, b) << endl;
	system("pause");
	return 0;
}