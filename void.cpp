#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

void printPow(double, int);

int main() {
    int base;
    double exponent;
    
    cout << "What is the base?: ";
    cin >> base;

    cout << "What is the exponent?: ";
    cin >> exponent;

    printPow(base, exponent);
    printPow(base * 10, exponent);
}

void printPow(double base, int exponent) {
    double power = pow(base, exponent);
    cout << base << " raised to the " << exponent << " power is " << power << "\n";
}