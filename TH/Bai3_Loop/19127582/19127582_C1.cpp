#include <iostream>
using namespace std;

int main()
{
    double celsius_value;
    cout << "Enter a temperature value in the Celsius scale: ";
    cin >> celsius_value;
    double fahrenheit_value = (celsius_value * 9 / 5) + 32;
    cout << "Fahrenheit value: " << fahrenheit_value << endl;
    system("pause");
    return 0;
}
