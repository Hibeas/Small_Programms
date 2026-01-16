#include <iostream>

using namespace std;

struct programista
{
	char imie[30];
	char nazwisko[50];
	int wiek;
	int pensja;
	char wyksztalcenie[100];
	char jezyki[20];

};
programista wpis(int x) {
	programista info[10];
	int i = 0;
	for (i = 0; i < x; i++)
	{
		cin >> info[i].imie;
		cin >> info[i].nazwisko;
		cin >> info[i].wiek;
		cin >> info[i].pensja;
		cin >> info[i].wyksztalcenie;
		cin >> info[i].jezyki;
	}
	for (i = 0; i < x; i++)
	{
		cout << info[i].imie << " ";
		cout << info[i].nazwisko << " ";
		cout << info[i].wiek << " ";
		cout << info[i].pensja << " ";
		cout << info[i].wyksztalcenie << " ";
		cout << info[i].jezyki << " ";
		cout << endl;
	}
	return info[i];
}


int main() {
	int a;
	cout << "Ilu programistów wpisaæ do struktury" << endl;
	cin >> a;
	wpis(a);


}
