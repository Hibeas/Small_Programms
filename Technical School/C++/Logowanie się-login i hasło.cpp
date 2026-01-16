#include <iostream>

using namespace std;
string login, haslo;
int main()
{
    cout << "podaj login: ";
    cin >> login;
    cout << "podaj haslo: ";
    cin >> haslo;
    if ((login=="admin")&&(haslo=="szarlotka"))
    {
        cout <<"udalo ci sie zalogowac";
    }
    else
    {
        cout << "nie udalo sie zalogowac";
    }
    return 0;
}
