/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex10: Viết chương trình tính vận tốc cuối cùng, khi biết vận tốc ban đầu, gia tốc và thời
gian. 
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    float fSpeed, fAcceleration, fTime;
    
    cout << "Nhap van toc ban dau = ",  cin >> fSpeed;
    cout << "Nhap gia toc = ",          cin >> fAcceleration;
    cout << "Nhap thoi gian = ",          cin >> fTime;
    
    float fLastSpeed = fSpeed + fAcceleration * fTime;

    cout << setprecision(4) << fixed;
    cout << "Van toc cuoi cung = " << fLastSpeed << endl;

    return 0;
}