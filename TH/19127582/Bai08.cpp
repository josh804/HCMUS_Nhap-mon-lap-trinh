/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex08: Viết chương trình nhập vào hai số a và b. Xuất ra c và d với:
    - c là phần nguyên khi chia a cho b
    - d là phần dư khi chia a cho b.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int a, b;
    cout << "a = ", cin >> a;
    cout << "b = ", cin >> b;

    int 
        c = a / b, 
        d = a % b;
    
    cout << setprecision(4) << fixed;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}