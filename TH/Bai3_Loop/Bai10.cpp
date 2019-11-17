#include <iostream>
using namespace std;

int main()
{
    unsigned long n;
    cout << "Nhap so nguyen duong n: ", cin >> n;
    
    for(unsigned long i = n - 1; i > 0; i--) {
        if(n % i == 0 && i % 2 != 0) {
            cout << "Uoc so le lon nhat cua N (tru so do ra) la: " << i;
            break;
        }
    }
    cout << endl;
    system("pause");
    return 0;
}