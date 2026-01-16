#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Warsztat_samochodowy {
	string marka;
	string model;
	string kolor;
	int liczba_drzwi;
	int rocznik;	
};

int main(int argc, char** argv) {
	Warsztat_samochodowy samochod;
		samochod.marka = "audi";
		samochod.model = "A11";
		samochod.kolor = "rozowy";
		samochod.rocznik = 2003;
		samochod.liczba_drzwi = 4;
		/*mo¿na te¿ z wpisywaniem danych 
		cout<<"Podaj marke";
		cin<<samochod.marka ale chyba nie o to chodzi³o (pisze jekbym by³ w b³êdzie*/
	cout << samochod.marka << " "<<samochod.model<<" "<< samochod.kolor<<" "<<samochod.rocznik<<" "<<samochod.liczba_drzwi;
	
	return 0;
}
