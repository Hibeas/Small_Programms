#include <iostream>
#include <math.h>
using namespace std;

struct czlowiek
{
	char plyta[20];
	char procesor[50];
	char karta[50];
	int rdzen;
	float pensja;

};




int main() {
	czlowiek osoba1;
	cin >> osoba1.plyta;
	cin >> osoba1.procesor;
	cin >> osoba1.karta;
	cin >> osoba1.rdzen;
	cin >> osoba1.pensja;

	cout << osoba1.plyta << endl;
	cout << osoba1.procesor << endl;
	cout << osoba1.karta << endl;
	cout << osoba1.rdzen << endl;
	cout << osoba1.pensja << endl;

}


