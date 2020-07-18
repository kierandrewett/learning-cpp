#include <iostream>

using std::cout;
using std::cin;

int main() {
	int slices = 15;

	cout << "How many slices of pizza do you want?: ";
	cin >> slices;

	cout << "You have " << slices << " slices of pizza" << std::endl;
}