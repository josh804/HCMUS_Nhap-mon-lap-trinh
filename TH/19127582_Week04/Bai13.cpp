/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Bai13:
    Nhập bán kính r1 và r2 của hai hình tròn và khoảng cách d giữa tâm hai đường tròn
    (r1, r2 và d là số nguyên dương). Cho biết vị trí tương đối giữa hai hình tròn này:
    tách rời, tiếp xúc ngoài, giao nhau, tiếp xúc trong, bao nhau hay chồng khớp lên
    nhau
*/

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int r1, r2, d, tong;

    cout << "Nhap r1: ", cin >> r1;
    cout << "Nhap r2: ", cin >> r2;
    cout << "Nhap d: ", cin >> d;
    
    tong = r1 + r2;
    
    if(tong == d) cout << "Hai duong tron tiep xuc ngoai";
    else if(tong < d) cout << "Hai duong tron khong cat, khong tiep xuc nhau";
    else if(abs(r1 - r2) == d) cout << "Hai duong tron tiep xuc trong";
    else cout << "Hai duong tron cat nhau";
    return 0;
}