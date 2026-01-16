#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int tab[12] = { 4, 5, 20, 125, 89, 65, 77, 2, 1, 0, 123, 47};
    for(int i=0;i<12;i++){
            for(int j=0;j<12-1;j++){
            if(tab[j]>tab[j+1]){
                                swap(tab[j],tab[j+1]);
                                }}}
    for(int i=0;i<12;i++){
            cout<<tab[i]<<endl;}
                                
    system("PAUSE");
    return EXIT_SUCCESS;
}
