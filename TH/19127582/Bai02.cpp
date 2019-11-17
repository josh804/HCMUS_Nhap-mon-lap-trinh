/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex02: Viết chương trình in các biểu thức sau ra màn hình. Biết rằng các giá trị các số được
lưu trong biến.
*/

#include <iostream>
using namespace std;

int main() {
    int m1 = 5, m2 = 7;
    float f1 = 3.7, f2 = 8.0;

    printf("%d + %d = %d\n", m1, m2, m1 + m2);          // Expect: 5 + 7 = 12
    printf("%0.1f + %0.1f = %0.1f\n", f1, f2, f1 + f2); // Expect: 3.7 + 8.0 = 11.7
    printf("%d + %0.1f = %0.1f\n", m1, f2, m1 + f2);    // Expect: 5 + 8.0 = 13.0
    printf("%d - %d = %d\n", m1, m2, m1 - m2);          // Expect: 5 - 7 = -2
    printf("%0.1f - %0.1f = %0.1f\n", f1, f2, f1 - f2); // Expect: 3.7 - 8.0 = -4.3
    printf("%d - %0.1f = %0.1f\n", m1, f2, m1 - f2);    // Expect: 5 - 8.0 = -3.0         
    printf("%d * %d = %d\n", m1, m2, m1 * m2);          // Expect: 5 * 7 = 35
    printf("%0.1f * %0.1f = %0.1f\n", f1, f2, f1 * f2); // Expect: 3.7 * 8.0 = 29.6
    printf("%d * %0.1f = %0.1f\n", m1, f2, m1 * f2);    // Expect: 5 * 8.0 = 40.0
    printf("%d / %d = %d\n", m1, m2, m1 / m2);          // Expect: 5 / 7 = 0
    printf("%0.1f / %0.1f = %0.1f\n", f1, f2, f1 / f2); // Expect: 3.7 / 8.0 = 0.5
    printf("%d / %0.1f = %0.1f\n", m1, f2, m1 / f2);    // Expect: 5 / 8.0 = 0.6            


    return 0;
}