#include <iostream>
using namespace std;
int main() {
	int b;
	int l;
	int c;
	int p;
	int s;
	cout << "Pounds of Beans:" << endl;
	cin >> b;
	cout << "Pounds of Lettuce:" << endl;
	cin >> l;
	cout << "Pounds of Carrots:" << endl;
	cin >> c;
	cout << "Pounds of Peas:" << endl;
	cin >> p;
	cout << "Pounds of Squash:" << endl;
	cin >> s;


	for (int i = 0; i < b; i++) {
		cout << "B";
	}
	for (int i = 0; i < l; i++) {
		cout << "L";
	}
	for(int i=0; i<c; i++){
		cout << "C";
	}
	for (int i = 0; i < p; i++) {
		cout << "P";
	}
	for (int i = 0; i < s; i++) {
		cout << "S";
	}
}