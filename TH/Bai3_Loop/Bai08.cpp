#include <iostream>
using namespace std;

int main() {
    unsigned long n;

    cout << "Nhap so nguyen duong n: ", cin >> n;

    unsigned long count = 0UL;
    for(unsigned long i = 1; i <= n; i++) {
        if(n % i == 0) count++;
    }

    cout << "Tong cac uoc so cua n: " << count << endl;
    system("pause");
    return 0;
}