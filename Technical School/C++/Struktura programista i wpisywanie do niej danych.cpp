#include <iostream>
//Stwórz strukturê programista zawieraj¹c¹ pola imiê, nazwisko, wyksztalcenie, pensja, wiek, jezyki programowania. Wykorzystaj przes³any plik
using namespace std;

struct Programista
{
    char imie[30];
    char nazwisko[50];
    char wyksztalcenie[100];
    int pensja;
    int wiek;
    char jezykiprogramowania[150];


};
Programista wpis(int x) {
    Programista dziennik[10];
    int i = 0;
    for (i = 0; i < x; i++)
    {
        cin >> dziennik[i].imie;
        cin >> dziennik[i].nazwisko;
        cin >> dziennik[i].wyksztalcenie;
        cin >> dziennik[i].pensja;  
        cin >> dziennik[i].wiek;
        cin >> dziennik[i].jezykiprogramowania;
    }
    for (i = 0; i < x; i++)
    {
        cout << dziennik[i].imie << " ";
        cout << dziennik[i].nazwisko << " ";
        cout << dziennik[i].wyksztalcenie << " ";
        cout << dziennik[i].pensja << " ";
        cout << dziennik[i].wiek << " ";
        cout << dziennik[i].jezykiprogramowania << " ";
        cout << endl;
    }
    return dziennik[i];
}


int main() {
    int a;
    cout << "Wpisz Imie" << endl;
    cin >> a;
    wpis(a);
    int b;
    cout << "wpisz Nazwisko" << endl;
    cin >> b;
    wpis(b);
    int c;
    cout << "Wpisz wyksztalcenie" << endl;
    cin >> c;
    wpis(c);
    int d;
    cout << "wpisz pensja" << endl;
    cin >> d;
    wpis(d);
    int e;
    cout << "Wpisz wiek" << endl;
    cin >> e;
    wpis(e);
    int f;
    cout << "wpisz jezyki programowania" << endl;
    cin >> f;
    wpis(f);
	return 0;
}
