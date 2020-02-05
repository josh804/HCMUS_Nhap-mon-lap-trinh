#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Nhap n: ", cin >> n;
  int m;
  cout << "Nhap m: ", cin >> m;

  int result = 0;
  for(int i = 0; i < m; i++) {
    result += n;
  }
  cout << result << endl;

  system("pause");
  return 0;
}