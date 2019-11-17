#include <iostream>
using namespace std;

int max(int a, int b, int c) {
    int max = a;
    if(b > max) max = b;
    if(c > max) max = c;
    return max;
}
int main() {
    int a, b, c;
    cout << "Nhap lan luot 3 so: ", cin >> a >> b >> c;

    int result = max(a, b, c);

    cout << "So lon nhat: " << result;

    system("pause");
    return 0;
}