#include <iostream>

using namespace std;
string imie; int liczba;
int main()
{

    cout << "imie" ;
    cin >> imie;
    cout << "liczba";
    cin >> liczba;
    for (int i=1; i<=liczba; i++)
    {
        cout <<i<<"."<<imie<<endl;
    }
    return 0;
}
