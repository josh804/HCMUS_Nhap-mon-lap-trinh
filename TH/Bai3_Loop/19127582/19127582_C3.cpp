#include <iostream>
using namespace std;

int main()
{
    int val1, val2;
    // double val1, val2;
    cout << "Enter val1: ", cin >> val1;
    cout << "Enter val2: ", cin >> val2;

    int sum = val1 + val2;
    int sub = val1 - val2;
    int mul = val1 * val2;
    int div = val1 / val2;

    // double sum = val1 + val2;
    // double sub = val1 - val2;
    // double mul = val1 * val2;
    // double div = val1 / val2;

    cout << val1 << " + " << val2 << " = " << sum << endl;
    cout << val1 << " - " << val2 << " = " << sub << endl;
    cout << val1 << " * " << val2 << " = " << mul << endl;
    cout << val1 << " / " << val2 << " = " << div << endl;
    
    system("pause");
    return 1;
}
