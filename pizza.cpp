#include <iostream>

using std::cout;
using std::cin;
using std::string;

int main() {
	string name = "MONKY";
	int slices = 15;

	cout << "What is your name? (default: monky): ";
	cin >> name;

	cout << "How many slices of pizza do you want?: ";
	cin >> slices;

	cout << name << ", you have " << slices << " slices of pizza" << std::endl;
}