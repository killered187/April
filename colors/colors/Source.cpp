#include <iostream>
#include <Windows.h>
using namespace std;
void color();
int main() {
	while (1) {
		color();
		system("pause");
	}
}
void color() {
	int color = rand() % 100 + 1;
	if (color <= 25) {
		system("color 19");
	}
	else if (color > 25 && color <= 50) {
		system("color 2a");
	}
	else if (color > 50 && color <= 100) {
		system("color 4c");
	}


}