#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int tab[2][2];
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			tab[i][j]=0;
		}
	}
	tab[0][0]=2;
	tab[0][1]=3;
    tab[1][0]=4;
    tab[1][1]=5;
    int wynik=tab[0][0]*tab[1][1]-tab[1][0]*tab[0][1];
    cout<<wynik<<endl;
    system("PAUSE");
    return EXIT_SUCCESS;
}
