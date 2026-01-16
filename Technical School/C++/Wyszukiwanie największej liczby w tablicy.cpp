#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int tab[10];
    for(int i=0;i<10;i++){
            tab[i]=rand() % 100 + 1;}
            
    for(int i=0;i<10;i++){
            cout<<tab[i]<<endl;}
    int x=tab[1];
    for(int i=0;i<10;i++){
            if(tab[i]>x){
                   x=tab[i];}}
    cout<<"najwieksza liczba to "<<x;      
    system("PAUSE");
    return EXIT_SUCCESS;
}
