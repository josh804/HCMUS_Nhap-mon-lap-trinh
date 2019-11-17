#include <iostream>
using namespace std;

int main()
{
    unsigned long n;

    cout << "Nhap so nguyen duong n: ", cin >> n;

    unsigned long sum = 0;
    for (unsigned long i = 1; i < n; i++)
    {
        if (n % i == 0)
            sum += i;
    }

    if (sum == n)
        cout << n <<" la so hoan thien.\n";
    else
        cout << n << " khong phai la so hoan thien.\n";
    system("pause");
    return 0;
}