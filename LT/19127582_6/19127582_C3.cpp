#include <iostream>
using namespace std;

void insert(int a[], int &n, int vt, int gt) {
  if(vt > n) return;
  for(int i = n; i >= vt; i--) {
    a[i + 1] = a[i];
  }
  a[vt] = gt;
  n++;
}
void print(int a[], int n) {
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
}
int main() {
  int a[100];
  int n;
  cout << "Nhap n: ", cin >> n;
  for(int i = 0; i < n; i++) {
    cout << "a[" << i << "] = ", cin >> a[i];
  }

  int vt, gt;
  cout << "Nhap vi tri can chen vao: ", cin >> vt;
  cout << "Nhap gia tri can chen vao: ", cin >> gt;

  insert(a, n, vt, gt);

  print(a, n);
  system("pause");
  return 0;
}