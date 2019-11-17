/*
    File: 19127582_C4.cpp
    Author: Trung Tin Nguyen
    Date: 15.11.2019
    Course: CSC10001(19CLC6) - Nhập môn lập trình
    Desc/Usage: Write a program that prompts the user to enter two integers, a and b (b  0), and a character
that belongs to the set {+, -, *, /, %} (which denotes the arithmetic operators, addition,
subtraction, multiplication, division with decimal part, and modulus, respectively), and then
informs the user the result of corresponding arithmetic operations. Use switch-case only
*/

#include <iostream>
using namespace std;

int main() {
    long a, b;
    char c;
    cout << "Enter a: ", cin >> a;
    cout << "Enter b: ", cin >> b;
    cout << "Enter an arithmetic operator {+, -, *, /, %}: ", cin >> c;

    switch(c) {
    case '+' :
        cout << a + b;
        break;
    case '-' :
        cout << a - b;
        break;
    case '*' :
        cout << a * b;
        break;
    case '/' :
        switch(b) {
        case 0: cout << "Vo cuc."; break;
        default: cout << a/ b;
        }
        break;
    case '%' :
        cout << a % b;
        break;
    default:
        cout << "Ban vua nhap mot ki tu khong hop le.";
    }    
    cout << endl;
    system("pause");
    return 0;
}