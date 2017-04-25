#include <iostream>

using namespace std;


bool Horoscope(int num);

int main(int num) {
	
	int input;

	cout << "What is your favorite number? 1 - 12" << endl;
	cin >> num;
	if (Horoscope(num) == true)
	cout << "Happy birthday" << endl;

}

bool Horoscope(int num) {
	if (num == 1) {
		cout << " ... is the lonliest number that you'll ever do..." << endl;
		
	}
	else if (num == 2) {
		cout << " 10 in binary!" << endl;
		
	}
	else if (num == 3) {
		cout << "... It's the magic number..." << endl;
		
	}
	else if (num == 4) {
		cout << " 2^2!" << endl;
		return 1;
	}
	else if (num == 5) {
		cout << "Remember Remember the 5th of November..." << endl;
		
	}
	else if (num == 6) {
		cout << " ...0110 in Binary!" << endl;

	}
	else if (num == 7) {
		cout << " 111 in Binary!" << endl;

	}
	else if (num == 8) {
		cout << num << "67-53oh9" << endl;

	}
	else if (num == 9) {
		cout << " (no in German)" << endl;

	}
	else if (num == 10) {
		cout << "1+2+3+4!" << endl;

	}
	else if (num == 11) {
		cout << "5th smallest prime number." << endl;


	}
	else if (num == 12) {
		cout << "It's High Noon..." << endl;

	}
	else {
		cout << "what is you doing?" << endl;
	}
}