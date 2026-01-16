#include <cstdlib>
#include <iostream>

using namespace std;
void dziennik(){
     int a,b,c,d,e;
     cout<<"Podaj swoje oceny "<<endl;
     cin<<a<<b<<c<<d<<e;
     int wynik=(a+b+c+d+e)/5;
int main(int argc, char *argv[])
{
    dziennik();
    system("PAUSE");
    return EXIT_SUCCESS;
}
