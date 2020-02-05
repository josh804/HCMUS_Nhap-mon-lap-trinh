#include <iostream>
using namespace std;

int main() {
  long n;
  cout << "Enter N: ", cin >> n;

  long result = 1;
  for(long i = 2; i <= n; i++) {
    result *= i;
  }

  cout << result << endl;

  system("pause");
  return 0;
}