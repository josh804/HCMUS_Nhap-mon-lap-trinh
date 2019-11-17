#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    long n;
    double x;
    cout << "Nhap so thuc x: ", cin >> x;
    cout << "Nhap so nguyen n: ", cin >> n;

    if(x == 0.0 && n == 0) {
        cout << "Loi phep tinh.\n";
        return 0;
    }
    if (n < 0)
    {
        n = abs(n);
        x = 1 / x;
    }
    double result = x;
    for (long i = 1; i <= n; i ++)
    {
        result *= x;
    }
    cout << setprecision(4) << fixed;
    cout << "Result: " << result << endl;
    system("pause");
    return 0;
}