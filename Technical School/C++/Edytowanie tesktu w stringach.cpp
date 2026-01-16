#include<iostream>
#include<string>
using namespace std;


int main()
{
	string tekst = "Szymon";
	string tekscik("Skarbek");
	cout<<"Dlugosc imienia "<<tekst.length()<<endl<<" Dlugosc nazwiska "<<tekscik.length()<<endl;

	tekst.erase(0, 3); // usuwanie znaków w stringu
	tekscik.erase(0, 3);
	

	string wynik = tekst + tekscik; // łączenie stringów
	 wynik=wynik+" programistyka ";
	 cout<<"5 podkpunkt "<<wynik<<endl;
	 wynik=" jeden "+wynik+" dwa";
	 cout<<"6 podpunkt "<<wynik<<endl;
	
	
		//int wynik =tekst.length();// liczenie ilosci znaków w stringu
	//int wynik = tekst.size(); // jak wyzej

	//string wynik = tekst.insert(5, tekscik, 2); // wrzucanie stringa do drugiego
	//string wynik = tekst.substr(3, 5); // przycinanie tekstu
	//tekst.erase(0, 4); // usuwanie znaków w stringu
	//tekst.swap(tekscik); // zamiana wartosci pomiedzy stringami
	//cout << wynik << endl;
	

	//string wynik = tekst + tekscik; // łączenie stringów
}
