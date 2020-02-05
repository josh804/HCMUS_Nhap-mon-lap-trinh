#include <iostream>
#include <string> 
using namespace std;

int max(int a, int b) 
{
	return a > b ? a : b;
}

string getLCSubStr(string x, string y)
{
	short F[256][256];
	string result = "";
	int max = 0;

	for (int i = 0, u = x.length(); i <= u; i++) {
		for (int j = 0, v = y.length(); j <= v; j++) {
			if (i == 0 || j == 0) 
				F[i][j] = 0;

			else if (x[i - 1] == y[j - 1]) {
				F[i][j] = F[i - 1][j - 1] + 1;

				if (max < F[i][j]) {
					max = F[i][j];
					result = x.substr(i - F[i][j], max);
				}
			}
			else F[i][j] = 0;
		}
	}
	return result;
}

int main()
{
	string x, y;

	cout << "Nhap chuoi thu nhat: ";
	getline(cin, x);
	cout << "Nhap chuoi thu hai: ";
	getline(cin, y);

	cout << "Chuoi con co do dai dai nhat la: " << getLCSubStr(x, y);
	return 0;
}
