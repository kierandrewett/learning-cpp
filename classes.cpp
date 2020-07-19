#include <iostream>
#include <string>

using namespace std;

int main() {
    string greeting = "what the fuck";
    greeting.replace(greeting.find("fuck"), 4, "****");
    cout << greeting;
}