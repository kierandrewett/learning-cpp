#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <vector>
#include "../classes/Guess.cpp"

using std::vector;
using std::cout;
using std::cin;
using std::endl;

int calculateTotalTime(vector<Guess> guesses);

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

int calculateTotalTime(vector<Guess> guesses) {
    int totalTime = 0;

    for (int i = 0; i < guesses.size(); i++) {
        totalTime += guesses[i].timeTaken;
    }

    return totalTime;
}