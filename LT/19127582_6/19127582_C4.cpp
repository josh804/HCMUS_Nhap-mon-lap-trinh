#include <iostream>
using namespace std;

void choose(int &option) {
  cout << "Nhap tuy chon:";
  cout << "\n1. Kiem tra mang co cac gia tri bang nhau.";
  cout << "\n2. Kiem tra mang tang dan.";
  cout << "\n3. Kiem tra mang giam dan.";
  cout << "\n4. Chia mang lam 2, kiem tra nua dau mang co tang dan khong, nua sau mang co giam dan khong.";
  cout << "\n5. Kiem tra cac phan tu vi tri chan tao thanh mang tang dan, cac gia tri le tao thanh mang giam dan.";
  cout << "\n(Nhap bat ki thu gi khac). Thoat.\n";
  cin >> option;
}
bool kiemTraGiaTriBangNhau(int a[], int n) {
  for(int i = 0, j = n - 1; i < j; i++) {
    if(a[i] != a[i + 1]) return false;
  }
  return true;
}
bool increasingOrder(int a[], int n) {
  for(int i = 0, j = n - 1; i < j; i++) {
    if(a[i] > a[i + 1]) return false;
  }
  return true;
}
bool decreasingOrder(int a[], int n) {
  for(int i = 0, j = n - 1; i < j; i++) {
    if(a[i] < a[i + 1]) return false;
  }
  return true;
}
bool check(int a[], int n) {
  if(n % 2 == 1) return false;
  for(int i = 0, j = n / 2; i < j; i++) {
    if(a[i] > a[i + 1]) return false;
  }
  for(int i = n / 2 + 1, j = n; i < j; i++) {
    if(a[i] < a[i + 1]) return false;
  }
  return true;
}
bool check2(int a[], int n) {
  for(int i = 0; i < n; i+=2) {
    if(i + 2 < n && a[i] > a[i + 2]) return false;
  }
  if(n == 1) return false;
  for(int i = 1; i < n; i+=2) {
    if(i + 2 < n && a[i] < a[i + 2]) return false;
  }
  return true;
}
int main() {
  int a[100];
  int n;
  cout << "Nhap n: ", cin >> n;
  for(int i = 0; i < n; i++) {
    cout << "a[" << i << "] = ", cin >> a[i];
  }

  int option;
  choose(option);
  switch(option) {
    case 1: {
      if(kiemTraGiaTriBangNhau(a, n)) {
        cout << "Cac gia tri bang nhau";
      }
      else cout << "Cac gia tri trong mang khong bang nhau.";
      break;
    }
    case 2: {
      if(increasingOrder(a, n)) cout << "Mang tang dan";
      else cout << "Mang khong tang dan.";
      break;      
    }
    case 3: {
      if(decreasingOrder(a, n)) cout << "Mang giam dan";
      else cout << "Mang khong giam dan.";
      break;      
    }
    case 4: {
      if(check(a, n)) cout << "Nua dau mang co tang dan, nua sau mang co giam dan";
      else cout << "Nua dau mang khong tang dan hoac nua sau mang khong giam dan. (hoac so phan tu mang khong chia het cho 2)";
      break;      
    }
    case 5: {
      if(check2(a, n)) cout << "Cac phan tu vi tri chan tao thanh mang tang dan, cac gia tri le tao thanh mang giam dan";
      else cout << "Cac phan tu vi tri chan khong tao thanh mang tang dan hoac cac gia tri le khong tao thanh mang giam dan";
      break;      
    }
  }
  // print(a, n);
  system("pause");
  return 0;
}