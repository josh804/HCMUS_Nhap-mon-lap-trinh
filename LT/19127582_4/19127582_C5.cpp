#include <iostream>
#include <cstring>
using namespace std;

void printCol(int a[], int row, int n) {
    for(int i = 1, tab = n - row; i < tab; i++) {
        cout << "\t";
    }
    for(int i = 0; i <= row; i++) {
        cout << a[i] << "\t\t";
    }
    cout << endl;
}
int main() {
    // const int n = 7;
    int n;
    cin >> n;
    int a[100][100];

    // Init
    memset(a, 0, sizeof(a));
    a[0][0] = 1;

    printCol(a[0], 0, n);
    for(int i = 1; i < n; i++) {
        a[i][0] = 1;

        for(int j = 1; j <= i; j++) {
            a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
        }

        printCol(a[i], i, n);
    }


    cout << endl;
    system("pause");
    return 0;
}