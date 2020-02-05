#include <iostream>
using namespace std;

struct Polynomial {
	double a[100];
	int n;
	void Input() {
		memset(a, 0, sizeof(a));
		cout << "Nhap n: ", cin >> n;
		for (int i = 0; i <= n; i++) {
			cout << "Nhap a[" << i << "]: ", cin >> a[i];
		}
	}
	void Output() {
		cout << "P(x) = ";
		if (n == -1) {
			cout << "0" << endl;
			return;
		}
		for (int i = n; i >= 0; i--) {
			if (a[i] == 0) continue;
			cout << a[i];
			
			if (i != 0) cout << "x^"  << i << " + ";
		}
	}
};

Polynomial daoHam(Polynomial x, int k = 1);
Polynomial sum(Polynomial x, Polynomial y);
Polynomial sub(Polynomial x, Polynomial y);
Polynomial mul(Polynomial x, Polynomial y);
Polynomial div(Polynomial x, Polynomial y);
Polynomial mod(Polynomial x, Polynomial y);

int main() {
	int k;
	//Polynomial daThuc1, daThuc2;
	//daThuc1.Input();
	//daThuc2.Input();
	Polynomial daThuc1{ {1,5,3,4}, 3 }, daThuc2{ {3,2}, 1 };
	//cout << "Nhap k: ", cin >> k;

	k = 2;
	cout << "Da thuc 1: ", daThuc1.Output();
	cout << "\nDa thuc 2: ", daThuc2.Output();

	cout << "\nTong: ", sum(daThuc1, daThuc2).Output();
	cout << "\nHieu: ", sub(daThuc1, daThuc2).Output();
	cout << "\nTich: ", mul(daThuc1, daThuc2).Output();
	cout << "\nThuong: ", div(daThuc1, daThuc2).Output();
	cout << "\nChia lay du (mod): ", mod(daThuc1, daThuc2).Output();
	cout << "\nDao ham bac 1 da thuc 1: ", daoHam(daThuc1).Output();
	cout << "\nDao ham bac k da thuc 1: ", daoHam(daThuc1, k).Output();

	cout << endl;
	system("pause");
	return 0;
}

Polynomial sum(Polynomial x, Polynomial y) {
	int loop_times = x.n > y.n ? x.n : y.n;
	Polynomial result;
	memset(result.a, 0, sizeof(result.a));

	for (int i = loop_times; i >= 0; i--) {
		result.a[i] = x.a[i] + y.a[i];
	}

	result.n = loop_times;
	return result;
}
Polynomial sub(Polynomial x, Polynomial y) {
	short loop_times = x.n > y.n ? x.n : y.n;
	Polynomial result;
	memset(result.a, 0, sizeof(result.a));

	for (int i = loop_times; i >= 0; i--) {
		result.a[i] = x.a[i] - y.a[i];
	}
	while (result.a[loop_times] == 0) 
		loop_times--;

	result.n = loop_times;

	return result;
}
Polynomial mul(Polynomial x, Polynomial y) {
	Polynomial result{0};
	long 
		max = 0,
		tmp;

	for (int i = 0; i <= x.n; i++) {
		if (x.a[i] == 0) continue;
		for (int j = 0; j <= y.n; j++) {
			tmp = i + j;
			if (tmp > max) max = tmp;
			result.a[tmp] += x.a[i] * y.a[j];
		}
	}

	result.n = max;
	
	return result;
}
Polynomial div(Polynomial x, Polynomial y) {
	if (x.n < y.n) return Polynomial{ {0}, -1 };
	Polynomial result, tmp;
	result = { {0}, 0 };

	do
	{
		tmp = { 0 , 0 };
		tmp.n = x.n - y.n;
		tmp.a[tmp.n] = x.a[x.n] / y.a[y.n];

		result = sum(result, tmp); // just to return
		
		x = sub(x, mul(tmp, y));
	} while (x.n >= y.n);

	return result;
}
Polynomial mod(Polynomial x, Polynomial y) {
	if (x.n < y.n) return Polynomial{ {0}, -1 };
	Polynomial result, tmp;
	result = { {0}, 0 };

	do
	{
		tmp = { 0 , 0 };
		tmp.n = x.n - y.n;
		tmp.a[tmp.n] = x.a[x.n] / y.a[y.n];

		result = sum(result, tmp); // just to return

		x = sub(x, mul(tmp, y));
	} while (x.n >= y.n);

	return x;
}
Polynomial daoHam(Polynomial x, int k) {
	if (k > x.n) return Polynomial{ {0}, -1};
	if (k == 0) return x;
	x.a[0] = 0;
	for (int i = 1; i <= x.n; i++) {
		if(x.a[i] == 0) continue;
		x.a[i-1] = i * x.a[i];
	}
	x.n--;
	return daoHam(x, k - 1);
}