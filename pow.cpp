#include <iostream>
#include <cmath>

using std::cout;
using std::cin;

double power(double base, int exponent);

int main() {
    int base, exponent;
    cout << "What is the base?: ";
    cin >> base;
    cout << "What is the exponent?: ";
    cin >> exponent;
    double newPower = power(base, exponent);
    cout << newPower;
}

double power(double base, int exponent) {
    double res = 1;

    for(int i = 0; i < exponent; i++) {
        res = res * base;
    }

    return res;
} 