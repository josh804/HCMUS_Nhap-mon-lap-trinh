/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex07: Viết chương trình tìm độ dài cạnh huyền, khi người dùng nhập vào hai cạnh góc
vuông.
*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    float canh1, canh2;
    cout << "Chieu dai canh goc vuong thu nhat = ", cin >> canh1;
    cout << "Chieu dai canh goc vuong thu hai = ", cin >> canh2;

    float canhHuyen = sqrt(pow(canh1, 2) + pow(canh2, 2));
    cout << setprecision(4) << fixed;
    cout << "Canh huyen = " << canhHuyen << endl;

    return 0;
}