#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int tab[20];
    for(int i=0;i<20;i++){
            i=rand()%100+1;
            }
    for(int i=0;i<20;i++)
    {cout<<"Elementem "<<i<<"Tablicy jest "<<tab[i];}
    system("PAUSE");
    return EXIT_SUCCESS;
}
