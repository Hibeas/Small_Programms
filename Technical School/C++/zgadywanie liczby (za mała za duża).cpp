#include <iostream>
#include <stdio.h>      /* printf, scanf, puts, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x=rand() % 50 + 1;
	cout<<x<<endl;
	bool cos=false;
	while(cos==false){
	cout<<"Podaj liczbe "<<endl;
	int y;
	cin>>y;
	if(y>x){
		cout<<"Liczba jest za duza"<<endl;
	}  
	if(y<x){
		cout<<"Liczba jest za mala"<<endl;
	}
	if(x==y){
		cout<<"Gratuluje odgadles "<<endl;
		cos=true;
}
}
	return 0;
}
