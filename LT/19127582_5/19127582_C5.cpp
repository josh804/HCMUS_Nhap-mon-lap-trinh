#include <iostream>
#include <cmath>
using namespace std;

long gcd(long a, long b) {
	if (a == 0) return b;
	
	return gcd(b % a, a);
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