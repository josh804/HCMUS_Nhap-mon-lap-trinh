/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex03: Viết chương trình để tính chu vi và diện tích của hình tròn khi người dùng nhập vào
một số thực R. Kết quả xuất ra làm tròn đến 4 chữ số thập phân.
*/

#include <iostream>
using namespace std;

int main() {
    const float pi = 3.14;
    float banKinh;
    
    cout << "Nhap ban kinh cua hinh tron: ";
    cin >> banKinh;
    
    const float 
        chuVi = banKinh * pi, 
        dienTich = banKinh * banKinh * pi;

    printf("Chu vi hinh tron: \t%10.4f\n", chuVi);
    printf("Dien tich hinh tron: \t%10.4f\n", dienTich);

    return 0;
}