#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
int rozmiar=rand() % 100 + 1;  ;
int * tablica = new int[rozmiar];

for(int i=0;i<rozmiar;i++){
	tablica[i]=rand() % 1000 + 1;  
}
for(int i=0;i<rozmiar;i++){
	cout<<tablica[i]<<endl;
}

delete [] tablica;
	return 0;
}
