#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int a[100];
    fstream()
    int n;
    cout << "Nhap do dai mang (n): ", cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ", cin >> a[i];
    }
    

    int max = 0;
    int num;
    int count;

    for (int i = 0; i < n; i++) {
        count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) count++;
        }
        if (count > max) {
            max = count;
            num = a[i];
        }
    }

    for (int i = 0; i < n; i++) {
        count = 1;
        for (int j = i + 1; j < n; j++) {
            if (a[i] == a[j]) count++;
        }
        if (count == max) {
            cout << "Phan tu xuat hien nhieu nhat la: " << a[i] << endl;
        }
    }

    //cout << "Phan tu xuat hien nhieu nhat la: " << num << endl;
    system("pause");
    return 0;
}