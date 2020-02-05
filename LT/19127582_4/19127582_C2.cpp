/**
  * Write a program that prompts the user to enter a positive integer N (N >= 3) and then informs
the user N first elements of the Fibonacci sequence.
For example, input: 6 → output: 1 1 2 3 5 8
*/
#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter N: ", cin >> n;

  int tmp[3];
  tmp[0] = 0;
  tmp[1] = 1;
  cout << 1 << " ";

  for(int i = 2; i <= n; i++) {
    tmp[2] = tmp[0] + tmp[1];
    cout << tmp[2] << " ";
    tmp[0] = tmp[1];
    tmp[1] = tmp[2];

  }

  cout << endl;
  system("pause");
  return 0;
}