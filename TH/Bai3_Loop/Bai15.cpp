#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // unsigned long n;

    unsigned long n;
    cout << "Nhap so nguyen duong n: ", cin >> n;

    unsigned char num_count = 0;
    while (n > 0)
    {
        n = n / 10;
        num_count++;
    }
    cout << "So luong chu so cua n la " << (int)num_count << endl;
    system("pause");
    return 0;
}