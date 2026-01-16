#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <windows.h>
#include <time.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void Babelkowe( int tab[], int size )
{
    for( int i = 0; i < size; i++ )
    {
        for( int j = 0; j < size - 1; j++ )
        {
            if( tab[ j ] > tab[ j + 1 ] )
                 swap( tab[ j ], tab[ j + 1 ] );
           
        }
    }
}

void Insertionsort( int tab[], int size )
{
    int temp, j;
   
    for( int i = 1; i < size; i++ )
    {
        temp = tab[ i ];
       
        for( j = i - 1; j >= 0 && tab[ j ] > temp; j-- )
             tab[ j + 1 ] = tab[ j ];
       
        tab[ j + 1 ] = temp;
    }
}
void Quicksort( int tab[], int left, int right )
{
    int i = left;
    int j = right;
    int x = tab[( left + right ) / 2 ];
    do
    {
        while( tab[ i ] < x )
             i++;
       
        while( tab[ j ] > x )
             j--;
       
        if( i <= j )
        {
            swap( tab[ i ], tab[ j ] );
           
            i++;
            j--;
        }
    } while( i <= j );
   
    if( left < j ) Quicksort( tab, left, j );
   
    if( right > i ) Quicksort( tab, i, right );
   
}

void Combsort( int tab[], int size )
{
    int gap = size;
    bool replace = true;
   
    while( gap > 1 || replace )
    {
        gap = gap * 10 / 13;
        if( gap == 0 )
             gap = 1;
       
        replace = false;
        for( int i = 0; i + gap < size; i++ )
        {
            if( tab[ i + gap ] < tab[ i ] )
            {
                swap( tab[ i ], tab[ i + gap ] );
                replace = true;
            }
        }
    }
}

void Shakesort( int tab[], int size )
{
    int bottom = 0, top = size - 1;
    bool replace = true;
   
    while( replace )
    {
        replace = false;
       
        for( int i = bottom; i < top; i++ )
        {
            if( tab[ i ] > tab[ i + 1 ] )
            {
                swap( tab[ i ], tab[ i + 1 ] );
               
                replace = true;
            }
        }
       
       
        top--;
        for( int i = top; i > bottom; i-- )
        {
            if( tab[ i ] < tab[ i - 1 ] )
            {
                swap( tab[ i ], tab[ i - 1 ] );
               
                replace = true;
            }
        }
       
        bottom++;
    }
}

int main(int argc, char** argv) {
	cout << "5 metod sortowan i jego czasy"<<endl;
	int tab[100000];
	for(int i=0;i<100000;i++){
		tab[i]=rand() % 1000000 + 1; 
	}
	double poczatek,koniec;
	int tab2[100000];
	
	for(int i=0;i<100000;i++){
		tab2[i]=tab[i];
	}
	
	poczatek = clock();
	Babelkowe(tab,100000); //sortowanie babelkowe
	koniec = clock();
	cout<<"Czas wykonywania sortowanie babelkowego : %lu ms\n"<< koniec - poczatek<<endl;
	
	for(int i=0;i<100000;i++){
		tab[i]=tab2[i];
	}
	
	poczatek = clock();
	Insertionsort(tab,100000);//sortowanie przez wstawianie
	koniec = clock();
	cout<<"Czas wykonywania sortowanie peW wstawianie : %lu ms\n"<< koniec - poczatek<<endl;
	
	for(int i=0;i<100000;i++){
		tab[i]=tab2[i];
	}
	
	poczatek = clock();
	Quicksort(tab,0,99999);//szybkie sortowanie
	koniec = clock();
	cout<<"Czas wykonywania sortowanie szybkie : %lu ms\n"<< koniec - poczatek<<endl;
	
	for(int i=0;i<100000;i++){
		tab[i]=tab2[i];
	}
	
	poczatek = clock();
	Combsort(tab,100000);//sortowanie grzebieniowe
	koniec = clock();
	cout<<"Czas wykonywania sortowanie grzebieniowe : %lu ms\n"<< koniec - poczatek<<endl;
	for(int i=0;i<100000;i++){
		tab[i]=tab2[i];
	}
	
	poczatek = clock();
	Shakesort(tab,100000);//sortowanie koktajlowe
	koniec = clock();
	cout<<"Czas wykonywania sortowanie koktajlowe : %lu ms\n"<< koniec - poczatek<<endl;
	return 0;
}
