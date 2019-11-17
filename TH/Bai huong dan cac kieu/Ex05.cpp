/*
    MSSV: 19127582
    Name: Nguyen Trung Tin
    Ex01: Chia 2 số
*/

#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    float answer;
    cout << "Enter 1st number: ";
    cin >> num1;
    cout << "Enter 2nd number: ";
    cin >> num2;
    answer = 1.0 * num1 / num2;
    // cout << "Answer: " << answer << endl;
    printf("%d + %d = %0.3f\n", num1, num2, answer);
    return 0;
}