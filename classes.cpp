#include <iostream>
#include <string>

using namespace std;

int main() {
    string greeting = "Hello";
    getline(cin, greeting);
    cout << greeting.length();
}