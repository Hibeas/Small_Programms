#include <iostream>
#include <cstdlib>
#include <ctime>





using namespace std;




int main()
{
int liczba_graczy, rzut1, rzut2, wyniki_1[4], wyniki_2[4];
string nick[4];
srand((unsigned)time(0));
cout << "Ilu graczy jest przy stole (max4)" << endl;
cin >> liczba_graczy;



if (liczba_graczy > 4) {
cout << "Graczy jest za du?o";
}
else
{
for(int i=0; i<liczba_graczy; i++){
cin >> nick[i];
}
for (int i = 0; i < liczba_graczy; i++)
{
rzut1 = rand() % 6 + 1;
rzut2 = rand() % 6 + 1;
wyniki_1[i] = rzut1;
wyniki_2[i] = rzut2;



}
for (int i = 0; i < liczba_graczy; i++)
{
cout << nick[i] << " uzyskal z jednej kostki " << wyniki_1[i] << endl;
cout << nick[i] << " uzyskal z drugiej kostki " << wyniki_2[i] << endl;
}
}



}
