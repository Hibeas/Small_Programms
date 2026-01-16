#include <iostream>

using namespace std;

int klasa, cukierki, x, y;
int main()
{
    cout << "Podaj liczbê cukierkow, ktore posiadasz: ";
    cin >> cukierki;
    cout << "Podaj liczbe osob w klasie: ";
    cin >> klasa;
    x = cukierki/(klasa -1);
    cout << "cukierkow dla kazdego ucznia: " << x << endl;
    y = cukierki - x * (klasa -1);
    cout << "dla jasia na wieczor; " << y;
    return 0;
}
