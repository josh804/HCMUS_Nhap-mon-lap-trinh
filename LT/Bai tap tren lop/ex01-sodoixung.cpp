//
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int n, so, du, tong = 0;
    cout << " nhap so nguyen n ";
    cin >> n;

    for (
        so = n;

        du = n % 10, 
        tong = tong * 10 + du, 
        n != 0; 
        
        n = n / 10
    );

    
    if (so == tong)
        cout << " so doi xung";
    else
        cout << " so khong doi xung";
    return 0;
}