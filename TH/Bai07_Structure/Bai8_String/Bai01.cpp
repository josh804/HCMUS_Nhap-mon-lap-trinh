#include <iostream>
#include <string>
using namespace std;

string reverse(string s) {
    int length = s.length();
    for (int i = 0, j = length / 2; i < j; i++) {
        swap(s[i], s[length - i - 1]);
    }
    return s;
}
int main()
{
    string s;
    cout << "Nhap chuoi: ";
    getline(cin, s);

    string result = reverse(s);
    cout << result << endl;
    system("pause");
    return 0;
}