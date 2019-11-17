#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    unsigned long n; // = 3UL;
    cout << "Nhap n: ", cin >> n;

    double result = 0.0;

    unsigned long loop_times = n;
    unsigned long i = 1;
    while(loop_times != 0) {
        result = result + 1.0 / i;
        i+=2;
        loop_times--;
    }

    cout << setprecision(2) << fixed;
    cout << "Result: " << result << endl;

    system("pause");
    return 0;
}