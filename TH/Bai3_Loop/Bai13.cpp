#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // unsigned long n;

    long n;
    cout << "Nhap so nguyen duong n: ", cin >> n;

    if (pow(long(sqrt(n)), 2) == n)
    {
        cout << n << " la so chinh phuong.\n";
    }
    else
    {
        cout << n << " khong la so chinh phuong.\n";
    }

    system("pause");
    return 0;
}