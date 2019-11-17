#include <iostream>
using namespace std;

int main()
{
    // TODO:
    // char coin_names[][] = {
    //     "pennies", "nickels", "dimes", "quarters", "half-dollars", "one-dollar"
    // };
    double penny, nickel, dime, quarter, halfdollar, onedollar;

    cout << "How many pennies do you have?" << endl, cin >> penny;
    cout << "How many nickels do you have?" << endl, cin >> nickel;
    cout << "How many dimes do you have?" << endl, cin >> dime;
    cout << "How many quarters do you have?" << endl, cin >> quarter;
    cout << "How many half-dollars do you have?" << endl, cin >> halfdollar;
    cout << "How many one-dollar coins do you have?" << endl, cin >> onedollar;

    cout << "You have " << penny << " pennies" << endl;
    cout << "You have " << nickel << " nickels" << endl;
    cout << "You have " << dime << " dimes" << endl;
    cout << "You have " << quarter << " quarters" << endl;
    cout << "You have " << halfdollar << " half dollars" << endl;
    cout << "You have " << onedollar << " one dollars" << endl;

    int sum = penny + nickel * 5 + dime * 10 + quarter * 25 + halfdollar * 50 + onedollar * 100;
    cout << "The value of all your coins is " << sum << "cents" << endl;

    // TODO:
    // printf("You have %d %s\n", penny, penny == 1 ? "penny." : "pennies.");
    // printf("You have %d %s\n", nickel, nickels == 1 ? "nickel." : "nickels.");
    // printf("You have %d %s\n", dime, dimes == 1 ? "dime." : "dimes.");
    // printf("You have %d %s\n", quarter, quarter == 1 ? "quarter." : "quarters.");
    // printf("You have %d %s\n", halfdollar, halfdollar == 1 ? "half-dollar coin" : "half-dollar coins.");
    // printf("You have %d %s\n", onedollar, onedollar == 1 ? "onedollar." : "onedollar coins.");

    return 0;
}