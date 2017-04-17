/* CSCI 261 A02: Triangles
* Author: XXXX (_INSERT_YOUR_NAME_HERE_)
*
* Add more complete description here...
*/
#include <math.h>
#include <ctime>
#include <iostream>   // For cin, cout, etc.
using namespace std;  // For standard namespace 

int main() {
	int x;
	int y;
	int x2;
	int y2;
	int y3;
	int x3;
	int sidelength1;
	int sidelength2;
	int sidelength3;
	int perimeter;
	int s;
	int area;
	srand(time(NULL));
	x = rand()% 20-10;
	y = rand() % 20-10;
	cout <<"your first points are "<< x << " and "<< y << endl;
	cout << "Enter two more coordinates." << endl;
	cin >> x2;
	cin >> y2;
	cout << "enter two more" << endl;
	cin >> x3;
	cin >> y3;
	sidelength1 = sqrt((x2 - x)*(x2 - x) + (y2 - y)*(y2 - y));
	sidelength2 = sqrt((x3 - x2)*(x3 - x2) + (y3 - y2)*(y3 - y2));
	sidelength3 = sqrt((x - x3)*(x - x3) + (y - y3)*(y - y3));
	perimeter = sidelength1 + sidelength2 + sidelength3;
	s = (sidelength1 + sidelength2 + sidelength3) * 2;
	area = sqrt(s*(s - sidelength1)*(s - sidelength2)*(s - sidelength3));
	cout << "The sides of the triangle are " << sidelength1 << endl << sidelength2 << endl << sidelength3 << endl << endl;
	cout << "The perimeter of the triangle is " << perimeter << endl << endl;
	cout << "The area of the triangle is " << area << endl << endl;






	// PART II: INSERT YOUR CODE BELOW HERE



	// PART II INSERT YOUR CODE ABOVE HERE
	// PART III INSERT YOUR CODE BELOW HERE




	// PART III INSERT YOUR CODE ABOVE HERE

	 // signals the operating system that our program ended OK.
}