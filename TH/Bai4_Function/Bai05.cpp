/*
    File: Bai05.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Viết hàm kiểm tra một số có phải số nguyên tố hay không. Từ đó, viết thủ tục liệt kê
tất cả số nguyên tố nhỏ hơn n.
*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long number)
{
    if(number == 2) return true;
    if (number < 2 || number % 2 == 0)
        return false;
    for (long i = 3; i < sqrt(number); i += 2)
    {
        if (number % i == 0)
            return false;
    }
    return true;
}
void ShowPrimeNumbers(long number)
{
    cout << "Cac so nguyen to be hon " << number << '\n';
    if(number >= 3) cout << 2 << " ";
    for (int i = 3; i < number; i += 2)
    {
        if (isPrime(i))
            cout << i << " ";
    }
    cout << '\n';
}
int main()
{
    long n;
    unsigned int count = 0;
    cout << "Nhap n: ", cin >> n;

    // long n = 17;

    bool result = isPrime(n);

    if (result)
        cout << n << " la so nguyen to.\n";
    else
        cout << n << " khong la so nguyen to.\n";

    ShowPrimeNumbers(n);

    system("pause");
    return 0;
}