#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int main() {
	string inventory[5];
	string input;
	cout << "do you want to pick up le magic sword" << endl;
	cin >> input;
	if (input.compare('yes')==0) {
		cout << "you grab the magic sword" << endl;
		inventory[0] = "Magic Sword";
	}
	if (inventory[0] == "Magic Sword") {
		cout << "You win" << endl;
		PlaySound(" w.wav", NULL, SND_FILENAME);
	}
	if (inventory[0] != "Magic Sword") {
		PlaySound(" l.wav", NULL, SND_FILENAME);

	}
}
