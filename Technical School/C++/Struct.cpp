#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;
int wiek[3];
int ilewiekow=0;

string imie[3];

struct pracownik{
       string imie;
       int wiek;
     };
     
void funkcja(pracownik pro){
	wiek[ilewiekow]=pro.wiek;
	imie[ilewiekow]=pro.imie;
	ilewiekow++;
	
	
}
int main(int argc, char *argv[])
{
    pracownik JELEN, Kuna, Jenot;
    
    JELEN.imie="Daniel";
    JELEN.wiek=30;

    Kuna.imie="Los";
    Kuna.wiek=20;
    
    Jenot.imie="Ktos";
    Jenot.wiek=10;
 	
	funkcja(JELEN);   
	funkcja(Kuna);   
	funkcja(Jenot);   
    for(int i=0;i<3;i++){
    	cout<<"Imie "<<imie[i]<<"  ";
    	cout<<"Wiek "<<wiek[i];
	}

    return EXIT_SUCCESS;
}
