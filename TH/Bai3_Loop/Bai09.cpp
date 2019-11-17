#include <iostream>
using namespace std;

int main() {
    unsigned long n;
    cout << "Nhap so nguyen duong n: ", cin >> n;

    cout << "Ta co cac uoc so le cua n la: ";
    for(unsigned long i = 1; i <= n; i++) {
        if(n % i == 0 && i % 2 != 0) cout << i << " ";
    }

    cout << endl;
    system("pause");
    return 0;
}