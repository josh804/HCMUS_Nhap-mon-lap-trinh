#include <iostream>
#include <math.h>
#define pi 3.14
using namespace std;

int main()
{
    double area;
    cout << "Enter the area of your circle: ";
    cin >> area;

    double perimeter = sqrt(area / pi) * pi;

    cout << "Perimeter: " << perimeter;

    return 0;
}