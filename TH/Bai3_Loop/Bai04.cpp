#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    unsigned long n;
    cout << "Nhap n: ", cin >> n;

    double result = 0.0;
    for(unsigned long i = 1UL; i <= n; i++) {
        result = result + double(i) / double(i + 1);
    }
    cout << setprecision(2) << fixed;
    cout << "Result: " << result << endl;

    system("pause");
    return 0;
}