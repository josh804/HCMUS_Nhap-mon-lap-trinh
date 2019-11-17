/*
    File: Bai01.cpp
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

double Calculate(double x, int n)
{
    double result = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
            result = result + pow(x, i);
        else
            result = result - pow(x, i);
    }
    return result;
}
int main()
{
    double x;
    int n;

    cout << "Nhap x: ", cin >> x;
    do
        cout << "Nhap n: ", cin >> n;
    while(n <= 0);
    // double x = 3;
    // int n = 4;
    // Expect value: -60

    double result = Calculate(x, n);

    cout << "Result: " << result << endl;

    system("pause");
    return 0;
}