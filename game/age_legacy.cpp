#include <iostream>
#include <string>

using namespace std;

int main() {
    string answer = "Bob";
    int age_answer = 17; 

    string guess;
    int age_guess;

    cout << "Guess my name?: ";

    cin >> guess;

        cout << "Guess my age?: ";

    cin >> age_guess;

    if(guess == answer && age_guess == age_answer) {
        cout << "You got it correct!";
    } else {
        cout << "You failed.";
    }

    for(int i = 0; i < 10; i++) {
        cout << i << endl;
    }
    
}