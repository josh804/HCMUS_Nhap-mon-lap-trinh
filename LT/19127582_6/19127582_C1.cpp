#include <iostream>
using namespace std;

void inFunc(int a[]) {
  for(int i = 0; i < 10; i++) {
    cout << "a[" << i << "] = "; 
    cin >> a[i];
  }
}
int findMax(int a[]) {
  int max = a[0];
  for(int i = 1; i < 10; i++) {
    if(a[i] > max) max = a[i];
  }
  return max;
}
int findMin(int a[]) {
  int min = a[0];
  for(int i = 1; i < 10; i++) {
    if(a[i] < min) min = a[i];
  }
  return min;
}
int main() {
  int a[10];
  inFunc(a);
  cout << "Max: " << findMax(a);
  cout << "\nMin: " << findMin(a) << endl;

  system("pause");
  return 0;
}