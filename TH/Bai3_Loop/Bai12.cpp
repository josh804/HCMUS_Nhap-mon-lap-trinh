#include <iostream>
using namespace std;

int main()
{
    unsigned long n;

    cout << "Nhap so nguyen duong n: ", cin >> n;

    bool is_prime = true;
    for (unsigned long i = 3; i < n; i+=2)
    {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    if(is_prime && n % 2 != 0) {
        cout << n << " la so nguyen to.\n";        
    }
    else {
        cout << n << " khong la so nguyen to.\n";
    }
    system("pause");
    return 0;
}