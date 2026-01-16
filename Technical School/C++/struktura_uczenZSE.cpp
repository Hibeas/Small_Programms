#include <iostream>

using namespace std;

struct UczenZSE
{
	char imie[30];
	char nazwisko[50];
	int nrDziennik;
	float srednia;

};
UczenZSE wpis(int x) {
	UczenZSE dziennik[10];
	int i = 0;
	for (i = 0; i < x; i++)
	{
		cin >> dziennik[i].imie;
		cin >> dziennik[i].nazwisko;
		cin >> dziennik[i].nrDziennik;
		cin >> dziennik[i].srednia;
	}
	for (i = 0; i < x; i++)
	{
		cout << dziennik[i].imie << " ";
		cout << dziennik[i].nazwisko << " ";
		cout << dziennik[i].nrDziennik << " ";
		cout << dziennik[i].srednia << " ";
		cout << endl;
	}
	return dziennik[i];
}


int main() {
	int a;
	cout << "Ilu uczniow wpisac do dziennika" << endl;
	cin >> a;
	wpis(a);


}