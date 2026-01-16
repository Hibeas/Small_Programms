#include <iostream>

using namespace std;
string PIN;
int main()
{
    cout << "Witaj w naszym banku, podaj numer PIN:" << endl;
    cin >> PIN;
    if(PIN=="1729")
    {
        cout << "Poprawny PIN";
    }
    else
    {
        cout << "Niepoprawny PIN";
    }
    return 0;
}
