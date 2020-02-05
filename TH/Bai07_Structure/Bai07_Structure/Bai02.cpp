#include <iostream>
using namespace std;

struct Fraction;
int GCD(int, int);
void QuyDong(Fraction &phso1, Fraction &phso2);

struct Fraction {
	int numberator;
	int denominator;
	void Print() {
		cout << numberator;
		if (denominator != 1) {
			cout << '/' << denominator;
		}
	}
	Fraction Shorten() {
		// 6/3 -> 3/1 find gcd, then div these two to.
		int gcd = GCD(numberator, denominator);
		numberator /= gcd;
		denominator /= gcd;

		return Fraction {numberator, denominator};
	}
};

// Function prototypes, Declare... etc..

void SelectMenu(int& select);
void Input(Fraction& phso);

Fraction Sum(Fraction phso1, Fraction phso2);
Fraction Sub(Fraction phso1, Fraction phso2);
Fraction Mul(Fraction phso1, Fraction phso2);
Fraction Div(Fraction phso1, Fraction phso2);


// Main
int main() {
	// Init
	int choose;
	Fraction 
		phso1, phso2;

	// Do things
	cout << "Nhap phan so thu 1: \n";
	Input(phso1);
	SelectMenu(choose);
	switch (choose) {
	case 1:
		/* In phan so */
		phso1.Print();
		break;
	case 2:
		/* Rut gon phan so */
		cout << "Phan so sau khi rut gon: ";
		phso1.Shorten().Print();
		break;
	case 3:
		cout << "Nhap phan so thu 2: \n";
		Input(phso2);
		Sum(phso1, phso2).Shorten().Print();
		break;
	case 4:
		cout << "Nhap phan so thu 2: \n";
		Input(phso2);
		Sub(phso1, phso2).Shorten().Print();
		break;
	case 5:
		cout << "Nhap phan so thu 2: \n";
		Input(phso2);
		Mul(phso1, phso2).Shorten().Print();
		break;
	case 6:
		cout << "Nhap phan so thu 2: \n";
		Input(phso2);
		Div(phso1, phso2).Shorten().Print();
		break;
	case 7:
		if (GCD(phso1.denominator, phso1.numberator) == 1) cout << "Phan so da toi gian";
		else cout << "Phan so chua toi gian.";
		break;
	case 8:
		cout << "Nhap phan so thu 2: \n";
		Input(phso2);
		phso1.Print(), cout << " va ", phso2.Print(), cout << " => ";
		QuyDong(phso1, phso2);
		phso1.Print(), cout << " va ", phso2.Print();
		break;
	case 9:
		cout << ((phso1.Shorten().numberator > 0) ? "TRUE" : "FALSE");
		break;
	case 10:
		cout << ((phso1.Shorten().numberator < 0) ? "TRUE" : "FALSE");
		break;
		case 11
		cout << "Nhap phan so thu 12 \n"; :
		Input(phso2);
		if (IsBiggerThan(phso1, phso2)) cout << "Phan so 1 lon hon phan so 2.";
		else cout << "Phan so 1 be hon phan so 2.";
		break;
	}
	cout << endl;
	system("pause");
	return 0;
}

// Functions
void Input(Fraction &phso) {
	cout << "Nhap tu so (numberator): ", cin >> phso.numberator;
	cout << "Nhap mau so (demoninator): ", cin >> phso.denominator;
}
void SelectMenu(int& select) {
	cout << "Menu:\n";
	cout
		<< "1  - Xuat phan so\n"
		<< "2  - Rut gon phan so\n"
		<< "3  - Tinh tong hai phan so. (Phan so ket qua o dang toi gian)\n"
		<< "4  - Tinh hieu hai phan so. (Phan so ket qua o dang toi gian)\n"
		<< "5  - Tinh tich hai phan so. (Phan so ket qua o dang toi gian)\n"
		<< "6  - Tinh thuong hai phan so. (Phan so ket qua o dang toi gian)\n"
		<< "7  - Kiem tra phan so toi gian\n"
		<< "8  - Qui dong hai phan so\n"
		<< "9  - Kiem tra phan so duong\n"
		<< "10 - Kiem tra phan so am\n"
		<< "11 - So sanh hai phan so\n";
	do
		cout << "Nhap tuy chon cua ban: ", cin >> select;
	while (select >= 1 && select <= 11 == false);

}
int GCD(int a, int b) {
	if (a == 0) return b;
	return GCD(b % a, a);
}
void QuyDong(Fraction& phso1, Fraction& phso2) {
	int LCM;
	LCM = phso2.denominator * phso1.denominator / GCD(phso2.denominator, phso1.denominator);
	phso1.numberator = phso1.numberator * (LCM / phso1.denominator);
	phso2.numberator = phso2.numberator * (LCM / phso2.denominator);
	phso1.denominator = phso2.denominator = LCM;
}
bool IsBiggerThan(Fraction x, Fraction y) {
	QuyDong(x, y);
	return x.numberator > y.numberator;
}
// 
Fraction Sum(Fraction phso1, Fraction phso2) {
	return Fraction{ phso1.numberator * phso2.denominator + phso2.numberator * phso1.denominator,
		phso1.denominator * phso2.denominator };
}
Fraction Sub(Fraction phso1, Fraction phso2) {
	return Fraction{ phso1.numberator * phso2.denominator - phso2.numberator * phso1.denominator,
		phso1.denominator * phso2.denominator };
}
Fraction Mul(Fraction phso1, Fraction phso2) {
	return Fraction{ phso1.numberator * phso2.numberator,
		phso1.denominator * phso2.denominator };
}
Fraction Div(Fraction phso1, Fraction phso2) {
	return Fraction{ phso1.numberator * phso2.denominator,
		phso1.denominator * phso2.numberator };
}
