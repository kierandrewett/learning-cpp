#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

void play();
void showTitleScreen();

int main() {
    srand(time(NULL));

    int option = 0;

    cout << endl << "\tGuessing game" << endl << endl;
    cout << "\t1. Play Game" << endl;
    cout << "\t2. Quit Game" << endl;
    cout << endl;

    do {
        showTitleScreen();

        cin >> option;

        if(option == 1) {
            play();
        } else if(option == 2) {
            return 0;
        }

    } while(option != 2);

}

void play() {
    int guess;
    int answer = rand() % 51;
    
    cout << endl << "Rolling you a random number..." << endl << "Guess the number" << endl << endl;

    while(guess != answer) {

        cout << "=> ";

        cin >> guess;

        if(guess == answer) {
            cout << endl << "You got it correct!" << endl;
            cout << endl << "Press 1 to restart or 2 to quit." << endl << endl;
        }
        else if(guess > answer) cout << endl << "Hint: Go lower!" << endl << endl;
        else if(guess < answer) cout << endl << "Hint: Go higher!" << endl << endl;
    }


}

void showTitleScreen() {
    cout << "=> ";
}