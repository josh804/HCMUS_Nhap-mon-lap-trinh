#include <iostream>
using namespace std;

int main()
{
    // unsigned long n;

    unsigned long n;
    cout << "Nhap so nguyen duong n: ", cin >> n;

    unsigned long tmp = n;
    unsigned int result = 0;
    while (n > 0)
    {
        result = result * 10 + n % 10;
        n = n / 10;
    }
    if(tmp == result)   cout << "YES\n";
    else                cout << "NO\n";
    system("pause");
    return 0;
}