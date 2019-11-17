#include <iostream>
using namespace std;

int main()
{
    unsigned long n;
    cout << "Nhap n: ", cin >> n;

    unsigned long result = 0L;
    for (unsigned long i = 1; i <= n; i++)
    {
        result += i * i;
    }

    cout << "Result: " << result << endl;
    system("pause");
    return 0;
}