#include <cstdlib>
#include <iostream>

using namespace std;
void dziennik(){
     int a,b,c,d,e;
     cout<<"Wybierz wage ocen 1 dla pracy na lekcji, 2 dla sprawdzianow"<<endl;
     switch(int x){
                case 1:
                
                break;
     cout<<"Podaj swoje oceny "<<endl;
     cin>>a>>b>>c>>d>>e;
     double wynik=(a+b+c+d+e)/5;
     cout<<"Srednia twoich ocen to "<<wynik<<endl;
     }
int main(int argc, char *argv[])
{
    dziennik();
    system("PAUSE");
    return EXIT_SUCCESS;
}
