#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x1,x2,y1,y2,z1,z2,wynik;
	cout << "podaj x1: ";
	cin >> x1;
	cout << "podaj x2: ";
	cin >> x2;
	cout << "podaj y1: ";
	cin >> y1;
	cout << "podaj y2: ";
	cin >> y2;
	cout << "podaj z1: ";
	cin >> z1;
	cout << "podaj z2: ";
	cin >> z2;
	wynik=(x1*x2)+(y1*y2)+(z1*z2);
	cout << "wynik: " << wynik;
	return 0;
}
