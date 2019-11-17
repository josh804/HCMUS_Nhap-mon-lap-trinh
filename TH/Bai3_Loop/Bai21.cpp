#include <iostream>
using namespace std;

long GetGCD(long a, long b) {
    long tmp;
    if(a > b) {
        // descending sort
        tmp = a;
        a = b;
        b = tmp;
    }

    while(b != 0) {
        // keep the one smaller
        tmp = b;
        b = a % b;
        a = tmp;
    }
    return a;
}
long GetLCM(long a, long b) {
    return a * b / GetGCD(a, b);
}
int main()
{
    // unsigned long n;

    long num1, num2;
    cout << "Nhap so nguyen thu nhat: ", cin >> num1;
    cout << "Nhap so nguyen thu hai: ", cin >> num2; 

    long result = GetGCD(num1, num2);
    cout << "GCD: " << result << endl;
    system("pause");
    return 0;
}