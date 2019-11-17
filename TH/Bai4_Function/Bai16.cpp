/*
    File: Bai16.cpp
    Author: Trung Tin Nguyen
    Date: 13/11/2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Viết thủ tục liệt kê các thừa số nguyên tố của một số nguyên dương n
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
int main() {    
    // Input
    long n;
    do
        cout << "Nhap so nguyen duong n: ", cin >> n;
    while(n <= 0);

    if(n == 1) {
        cout << "Khong the phan tich";
        return 0;
    }
    if(isPrime(n)) {
        cout << n << endl;
        return 0;
    }

    // Solve
    int i = 2;
    
    while(n != 1) {
        int counter = 0;
        while(n % i == 0) {
            n /= i;
            counter++;
        }
        if(counter > 0) {
            cout << i << "^" << counter;
            if(n / i != 0) cout << "*";
        }

        while(!isPrime(++i));
    }


    system("pause");
    return 0;
}