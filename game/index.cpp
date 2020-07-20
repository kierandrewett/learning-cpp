#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <vector>

using namespace std;

class Guess {
    public: 
        int guess;
        int timeTaken;
};

void play();
void showTitleScreen();
int calculateTotalTime(vector<Guess> guesses);

int main() {
    srand(time(NULL));

    int option = 0;

    cout << endl << "\tGuessing game" << endl << endl;
    cout << "\t1. Play Game" << endl;
    cout << "\t2. Quit Game" << endl;

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

    vector<Guess> guesses;
    
    cout << endl << "Rolling you a random number..." << endl << "Guess the number" << endl << endl;

    while(guess != answer) {
        int t = time(NULL);

        cout << "=> ";

        cin >> guess;

        Guess myGuess;

        myGuess.guess = guess;
        myGuess.timeTaken = time(NULL) - t;

        guesses.push_back(myGuess);
        
        if(guess == answer) {
            int totalTime = calculateTotalTime(guesses);

            cout << endl << "You got it correct! It took you " << guesses.size() << " guess" << (guesses.size() == 1 ? "" : "es") << " and a total of " << totalTime << " seconds.";
            cout << endl << "Press 1 to restart or 2 to quit." << endl;
        }
        else if(guess > answer) cout << endl << "Hint: Go lower!" << endl << endl;
        else if(guess < answer) cout << endl << "Hint: Go higher!" << endl << endl;
    }


}

void showTitleScreen() {
    cout << endl << "=> ";
}

int calculateTotalTime(vector<Guess> guesses) {
    int totalTime = 0;

    for (int i = 0; i < guesses.size(); i++) {
        totalTime += guesses[i].timeTaken;
    }

    return totalTime;
}