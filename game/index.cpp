#include <iostream>

using namespace std;

int main() {
    int age;

    cout << "How old are you?: ";
    cin >> age;

    if(age < 13) {
        cout << "You are not old enough!";
    } else if(age == 18) {
        cout << "You are an adult, welcome";
    } else {
        cout << "Welcome";
    }
}