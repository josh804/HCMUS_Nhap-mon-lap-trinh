/*
    File: Bai10.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết các hàm tương ứng để thực hiện yêu cầu sau: người dùng nhập vào hai số và
    toán tử (cộng, trừ, nhân, chia). Xuất ra kết quả tương ứng.
*/
#include <iostream>
using namespace std;

void calculate(long a, long b, char opr) {
    switch(opr) {
    case '+' :
        cout << a + b;    
        break;
    case '-' :
        cout << a - b;
        break;
    case '*' :
        cout << a * b;
        break;
    case '/' :
        if(b == 0) cout << "Vo han";
            else cout << a /b;
    }
}
int main() 
{
    long a, b;
    char opr;

    cout << "Nhap so thu nhat: ", cin >> a;
    cout << "Nhap so thu hai: ", cin >> b;

    do
        cout << "Nhap toan tu (+, -, *, /): ", cin >> opr;
    while(opr != '+' && opr != '-' && opr != '*' && opr != '/');

    calculate(a, b, opr);

    cout << endl;
    system("pause");
    return 1;
}