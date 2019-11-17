/*
    File: Bai08.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết hàm kiểm tra một số có phải số hoàn thiện (perfect number) hay không. Từ đó,
    viết thủ tục liệt kê tất cả số hoàn hảo nhỏ hơn n.
*/

#include <iostream>
using namespace std;

bool IsNumberPerfect(long n)
{
    long temp = 0;
    for (long i = 1, j = n - 1; i < j; i++)
    {
        if (n % i == 0)
            temp += i;
    }
    return temp == n;
}
int main()
{
    long n;
    cout << "Nhap n: ", cin >> n;

    if (IsNumberPerfect(n))
        cout << n << " la so hoan thien.";
    else
        cout << n << " khong la so hoan thien.";

    cout << "\nCac so hoan thien nho hon " << n << ": ";
    for (long i = 1, j = n - 1; i < j; i++)
    {
        if (IsNumberPerfect(i))
            cout << i << " ";
    }

    cout << "\n";
    system("pause");
    return 0;
}