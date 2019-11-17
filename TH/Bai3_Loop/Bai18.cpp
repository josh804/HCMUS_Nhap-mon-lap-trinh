#include <iostream>
using namespace std;

int main()
{
    // unsigned long n;

    unsigned long n;
    cout << "Nhap so nguyen duong n: ", cin >> n;

    char max = 0;
    char phan_du;
    while (n > 0)
    {
        phan_du = n % 10;
        if(max < phan_du) max = phan_du;
        n = n / 10;
    }
    cout << "Chu so lon nhat trong n la: " << int(max) << endl;
    system("pause");
    return 0;
}