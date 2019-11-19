/*
    File: test.cpp
    Author: Trung Tin Nguyen
    Date: 19.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Cho mảng 2 chiều vuông kích thươc n.
    a) tính tổng các số chẳn trong mảng
    b) tính tổng trên cột chẳng, tính tích trên cột lẻ
    c) kiểm tra xem dòng chẳn có tăng không, dòng lẻ có giảm không?
    d) kiểm tra xem mảng có tính chất tăng theo đường xoắn ốc không
    vị trí bắt đầu xoắn vào a[0][0]
*/

#include <iostream>
using namespace std;
#define DEBUG

int calculate(int a[][4], int n)
{
    int result = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 == 0)
                result += a[i][j];
        }
    }
    return result;
}
void calculate2(int a[][4], int n)
{
    int
        tong = 0,
        tich = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (a[i][j] % 2 == 0)
                tong += a[i][j];
            else
                tich *= a[i][j];
        }
    }
    cout << "b)\nTong: " << tong << "\nTich: " << tich << endl;
}
void calculate3(int a[][4], int n)
{
    cout << "c) ";

    int
        tmp = a[0][0],
        tmp2 = a[0][1];

    bool
        ascendingOrder = true,
        descendingOrder = true;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (ascendingOrder && i % 2 == 0)
            {
                if (a[i][j] < tmp)
                    ascendingOrder = false;
                tmp = a[i][j];
            }
            else if (descendingOrder)
            {
                if (a[i][j] > tmp2)
                    descendingOrder = false;
                tmp2 = a[i][j];
            }
            if (!ascendingOrder & !descendingOrder)
                break;
        }
        if (!ascendingOrder & !descendingOrder)
            break;
    }

    if (ascendingOrder)
        cout << "Dong chan co tang\n";
    if (descendingOrder)
        cout << "Dong le co giam\n";
}
void calculate4(int a[][4], int n)
{
    cout << "d)\n";
    int
        rows = n,
        col = n;

    const int mask[][2] = {
        {0, 1}, {1, 0}, {0, -1}, {-1, 0}
    };

    int pos[2] = {0, 0};
    
    cout << "Duyet a[0][0]\n";
    for(int i = 0; i < 4; i++) { 
        if(i % 2 == 0) {
            for(int j = 0; j < rows - 1; j++) {
                pos[0] += mask[i][0];
                pos[1] += mask[i][1];

                cout << "Duyet a[" << pos[0] << "]["<< pos[1] <<"]" << endl; 
            }
            --rows;
        }
        else {
            for(int u = 0; u < col - 1; u++) {
                pos[0] += mask[i][0];
                pos[1] += mask[i][1];

                cout << "Duyet a[" << pos[0] << "]["<< pos[1] <<"]" << endl;            
            }
            --col;
        }
    }
}
int main()
{
#ifndef DEBUG
    int n;
    cout << "Nhap n: ", cin >> n;

    int a[100][100];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "a[" << i << "][" << j << "] =", cin >> a[i][j];
        }
    }
#else
    int a[][4] = {
        {1, 2, 3, 4}, 
        {5, 6, 7, 8}, 
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };
    int n = sizeof(a) / sizeof(*a);
#endif

    // int result = calculate(a, n);

    // cout << "a) " << result;
    // calculate2(a, n);
    // calculate3(a, n);

    calculate4(a, n);
    system("pause");
    return 0;
}