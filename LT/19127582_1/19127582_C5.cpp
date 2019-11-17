/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
*/

#include <iostream>
// #include <stdio.h>
using namespace std;

#define     height      4
#define     width       7

int main() {
    for(unsigned short i = 1; i <= height; i++) {
        for(unsigned short j = 1; j <= width; j++) {
            cout << "*\t";
        }
        cout << "\n";
    }
    return 0;
}