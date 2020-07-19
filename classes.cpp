#include <iostream>
#include <string>

using namespace std;

int main() {
    string greeting = "what is up";

    cout << greeting.find_first_of("aeiou");
}