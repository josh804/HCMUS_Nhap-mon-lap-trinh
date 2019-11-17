/*
    File: Bai15.cpp
    Author: Trung Tin Nguyen
    Date: 13/11/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết hàm nhận vào một số nguyên dương n, tìm số nguyên tố gần nó nhất. 
    Nếu có hai số nguyên tố cùng gần n nhất, thì trả về số nhỏ hơn.
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
long solve(long n)
{
    // find below
    long result = n - 1;
    while (!isPrime(result)) result--;
    // find bigger
    long result2 = n + 1;
    while (!isPrime(result2)) result2++;

    return (result < result2) ? result : result2;
}
int main()
{

    long n;
    do
        cout << "Nhap so nguyen duong n: ", cin >> n;
    while (n <= 0);

    long result = solve(n);
    cout << "Output: " << result << endl;
    system("pause");
    return 0;
}