#include <iostream>
using namespace std;

int main() {
  long sum = 0, value;
  do {
    cin >> value;
    sum += value;
  }
  while(value != 0);

  cout << sum << endl;

  system("pause");
  return 0;
}