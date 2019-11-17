#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    // unsigned long n;

    unsigned long n;
    cout << "Nhap so nguyen duong n: ", cin >> n;

    unsigned long result = 1; 
    for(unsigned long i = n - 1, sum; i > 0; i--) {
        sum = 0;
        for(unsigned long j = 1; j <= i; j++) {
            sum += j;
        }
        if(sum < n) {
            result = i;
            // cout << "[debug] highest value of array \"k\": " << sum << endl;
            break;
        }
    }

    cout << "So nguyen duong k lon nhat la " << result << endl;
    system("pause");
    return 0;
}