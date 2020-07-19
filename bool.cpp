#include <iostream>

using std::cout;
using std::boolalpha;

int main() {
    bool pizzaisGood = true;

    cout << boolalpha << pizzaisGood;

    if(pizzaisGood) cout << "pizza is good";
}