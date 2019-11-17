#include <iostream>
using namespace std;

int main()
{ 
    short coin_values[] = {100, 50, 25, 10, 5, 1};
    char coin_names[6][13] = {"one-dollar", "half-dollars", "quarters", "dimes", "nickels", "pennies"};
    long cent; // = 60L;

    cout << "How many cents do you have?\n", cin >> cent;
    for(char i = 0; i < 6; i++) {
        unsigned int temp = 0;
        while(cent - coin_values[i] > 0) {
            temp++;
            cent = cent - coin_values[i];
        }
        // if(temp > 0) 
        cout << "You have " << temp << " " << coin_names[i] << "." << endl;
    }
    system("pause");
    return 0;
}
