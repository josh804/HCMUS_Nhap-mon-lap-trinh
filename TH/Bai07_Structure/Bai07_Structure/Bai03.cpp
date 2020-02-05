#include <iostream>
using namespace std;

struct P {
	double a;
	double n;
	void Output() {
		if (n == -1) cout << "P(x) = 0";
		else
			cout << "P(x) = " << a << "x^" << n;
	}
	void Input() {
		cout << "\tNhap a: ", cin >> a;
		cout << "\tNhap n: ", cin >> n;
	}
	double calculate(int x) {
		return a * pow(x, n);
	}
};

P mul(P x, P y);
P div(P x, P y);
P derivative(P x, int k);

void Instruct(int x) {
	cout << "\n\nEm xin chao thay co da den voi code bai 3 cua em.\n\n";
	cout << "-----------PHAN HUONG DAN " << x << "-------------\n";
	switch (x) {
	case 1:
		cout << "Vi sap xep cac cau cua de khong hop ly, nen em da sap xep lai cho hop ly:";
		cout << "\nDau tien, xin thay co hay nhap Don thuc 1.\n- Em se:";
		cout << "\n\t- In ra don thuc vua nhap";
		cout << "\n\t- Tinh dao ham cap 1 cua don thuc vua nhap";
		cout << "\n\t- Tinh dao ham cap k cua don thuc vua nhap";
		cout << "\nSau do, thay co nhap x0. Em se:";
		cout << "\n\t- Tinh gia tri don thuc tai x0 ma thay co vua nhap.\n\n";
		cout << "Kinh chuc thay co khong bi stress khi doc code cua em.\n";
		break;
	case 2:
		cout << "Vi sap xep cac cau cua de khong hop ly, nen em da sap xep lai cho hop ly:";
		cout << "\nDau tien, xin thay co hay tiep tuc nhap Don thuc 2.\n- Em se:";
		cout << "\n\t- Tinh tich 2 don thuc\n\t- Tinh thuong 2 don thuc";
	}
	cout << "-----------BAT DAU------------\n\n";
}
int main() {
	P dthuc1, dthuc2;
	// Phan co don thuc 1
	int k;
	Instruct(1);
	cout << "Nhap don thuc 1:\n", dthuc1.Input();
	cout << "Don thuc da nhap:\n", dthuc1.Output();
	cout << "\nDao ham cap 1 cua don thuc 1: ", derivative(dthuc1, 1).Output();
	cout << "\nNhap k: ", cin >> k;
	cout << "Dao ham cap "<< k <<" cua don thuc 1: ", derivative(dthuc1, k).Output();
	int x;
	cout << "\nNhap x: ", cin >> x;
	cout << "Gia tri cua don thuc 1 tai " << x << " la: " << dthuc1.calculate(x);

	// Phan co xuat hien don thuc 2
	Instruct(2);
	cout << "Nhap don thuc 2:\n", dthuc2.Input();
	cout << "Tich hai don thuc: ", mul(dthuc1, dthuc2).Output();
	cout << "\nThuong hai don thuc: ", div(dthuc1, dthuc2).Output();
	
	cout << endl;
	system("pause");
	return 0;
}

P mul(P x, P y) {
	return P{ x.a * y.a, x.n + y.n };
}
P div(P x, P y) {
	return P{ x.a / y.a, x.n - y.n };
}
P derivative(P x, int k) {
	if (x.n < 0) return P {0, -1};
	if (k == 0) return x;
	return derivative(P{ x.a * x.n, x.n - 1 }, k - 1);
}