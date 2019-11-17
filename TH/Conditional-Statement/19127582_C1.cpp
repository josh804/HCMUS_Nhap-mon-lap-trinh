#include <iostream>
using namespace std;

int main() 
{
    long a, b, c;
    cout << "Enter a: ", cin >> a;
    cout << "Enter b: ", cin >> b;
    cout << "Enter c: ", cin >> c;

    long max = a;
    if(b > max) max = b;
    if(c > max) max = c;

    cout << "The biggest number: " << max << endl;

    system("pause");
    return 1;
}