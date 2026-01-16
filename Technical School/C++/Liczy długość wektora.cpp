#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x, y, z;
	float wynik;
	cout << "Podaj wspolrzedne wektora: ";
	cin >> x;
	cin >> y;
	cin >> z;
	wynik = sqrt((pow(x,2))+(pow(y,2))+(pow(z,2)));
	cout << "Wynik ~~ " << wynik;
	return 0;
}
