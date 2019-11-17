#include <iostream>
using namespace std;

bool AllOddNumbers(unsigned long num) {
    while (num > 0) {
        if((num % 10) % 2 == 0) return false;
        num = num / 10;
    }
    return true;    
}
int main()
{
    // unsigned long n;

    unsigned long number;
    cout << "Nhap so nguyen duong n: ", cin >> number;

    char max = 0;
    if(AllOddNumbers(number))    cout << "YES\n";
    else                    cout << "NO\n";
    system("pause");
    return 0;
}