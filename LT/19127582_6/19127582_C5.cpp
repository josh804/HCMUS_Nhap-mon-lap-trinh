#include <iostream>
using namespace std;

void swap(int a[], int i, int j) {
    if (i == -1 || j == -1) return;
    int tmp = a[i];
    a[i] = a[j];
    a[j] = tmp;
}
int findMinIndex(int a[], int n, int fromPos) {
    if (fromPos >= n) return -1;
    int min = fromPos;
    for (int i = fromPos + 1; i < n; i++) {
        if (a[i] < a[min]) min = i;
    }
    return min;
}
void sort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        swap(a, findMinIndex(a, n, i), i);
    }
}
void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
int main() {
    int a[100];
    int n;
    cout << "Nhap n: ", cin >> n;
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ", cin >> a[i];
    }

    sort(a, n);

    print(a, n);


    system("pause");
    return 0;
}