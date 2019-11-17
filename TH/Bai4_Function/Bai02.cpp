/*
    File: Bai02.cpp
    Author: Trung Tin Nguyen
    Date: Unknown
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết hàm tính theo
    https://courses.fit.hcmus.edu.vn/ctdb/pluginfile.php/24503/mod_resource/content/1/Bai4_Function.pdf
*/
#include <iostream>
#include <cmath>
using namespace std;

double Calculate(int n)
{
    double result = 0;
    int temp = 0;
    for(int i = 1; i <= n; i++) {
        temp += i;
        if (i % 2 != 0)
            result = result + 1.0 / temp;
        else
            result = result - 1.0 / temp;

    }
    return result;
}
int main()
{
    int n;
    do
        cout << "Nhap n: ", cin >> n;
    while(n <= 0);

    // int n = 4;
    // Expect value: 0.73

    double result = Calculate(n);

    cout << "Result: " << result << endl;

    system("pause");
    return 0;    
}