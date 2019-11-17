#include <iostream>
using namespace std;

int main()
{
    // unsigned long n;

    unsigned long n;
    cout << "Nhap so nguyen duong n: ", cin >> n;

    unsigned int sum = 0;
    while (n > 0)
    {
        sum = sum + n % 10;
        n = n / 10;
    }
    cout << "Tong cac chu so cua n la " << sum << endl;
    system("pause");
    return 0;
}