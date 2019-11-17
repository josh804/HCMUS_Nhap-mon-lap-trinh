/*
    File: Bai18.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: 
        Viết thủ tục liệt kê các cách chọn các tờ giấy từ 3 loại giấy bạc 1000đ, 2000đ, và
5000đ, sao cho tổng là 200000đ
*/
#include <iostream>
#include <typeinfo>
using namespace std;

void list(int number) {
    for(int i = 0, tmp1 = number / 1000; i <= tmp1; i++) { /// 1000
        for(int j = 0, tmp2 = number / 2000; j <= tmp2; j++) { /// 2000
            for(int k = 0, tmp3 = number / 5000; k <= tmp3; k++) { // 5000
                if(1000*i + 2000*j + 5000*k == 200000) {
                    cout << i << " to 1000, " << j << " to 2000, " << k << " to 5000." << endl;
                }
            }
        }
    }    
}
int main() {

    list(200000);
    system("pause");
    return 0;
}