/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
*/

#include <iostream>
// #include <stdio.h>
using namespace std;

int main() {
    for(unsigned short i = 1; i <= 4; i++) {
        for(unsigned short j = 0; j < i; j++) {
            cout << "*\t";
        }
        cout << "\n";
    }
    return 0;
}

