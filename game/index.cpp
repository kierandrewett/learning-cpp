#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>

using namespace std;

void play();

int main() {
    srand(time(NULL));

    int option = 0;

    do {
        cout << "\tGuessing game" << endl << endl;
        cout << "\t1. Play Game" << endl;
        cout << "\t2. Quit Game" << endl;
        cout << endl;
        cout << "=> ";

        cin >> option;

        switch(option) {
            case 1:
                play();
                return 0;
            case 2:
                cout << "Goodbye :(" << endl;
                break;
            default:
                break;
        }

    } while(option != 2);

}

void play() {
    int random = rand() % 251;
    
    cout << "Rolling you a random number..." << endl << "Guess the number" << endl << "=> ";

    int guess;

    cin >> guess;

    if(guess == random) cout << endl << "You got it correct!";
    else cout << endl << "It was incorrect, the number was " << random;
}