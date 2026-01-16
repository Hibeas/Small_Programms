#include <iostream>

using namespace std;

struct zespolona
{
	float rzeczywista;
	float urojona;
};



// 3a +6 + 2b -8 +2 + c -5a = -2a +2b + c
// 7 + 3i -4 + 12i = 3 +15i 

int main() {
	int liczba;
	float a, b, wynik;
	cout << "1.Dodawanie" << endl;
	cout << "2.Odejmowanie" << endl;
	cout << "3.Mnozenie" << endl;
	cout << "4.Dzielenie" << endl;
	cin >> liczba;
	switch (liczba)
	{
	case 1:
		cin >> a;
		cin >> b;
		wynik = a + b;
		cout << wynik;
		break;
	case 2:
		cin >> a;
		cin >> b;
		wynik = a - b;
		cout << wynik;
		break;
	case 3:
		cin >> a;
		cin >> b;
		wynik = a * b;
		cout << wynik;
		break;
	case 4:
		cin >> a;
		cin >> b;
		wynik = a / b;
		cout << wynik;
		break;
	default:
		cout << "zegnam" << endl;
		break;
	}
}