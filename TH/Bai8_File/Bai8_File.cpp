#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int n;
    long sum = 0;
  
    fstream file_in("Input.txt", ios::in);
    if (file_in.is_open() == false) cout << "File khong ton tai.";
    file_in >> n;
    
    int a[100];
    file_in.readsome(a, n);

    for (int i = 0, x; i < n; i++) {
        file_in >> x;
        sum += x;
    }

    fstream file_out("Output.txt", ios::out);
    file_out << sum << endl;
    file_out.close();
    
    return 0;
}