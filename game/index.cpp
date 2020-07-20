#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <chrono>
#include <thread>
#include <vector>

#include "methods/play.cpp"
#include "tools/titleScreen.cpp"
#include "tools/seedRand.cpp"
#include "declarations.cpp"

using namespace std;

int main() {
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