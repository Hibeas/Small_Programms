#include <iostream>
#include <cstdlib>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	srand (time(NULL));
	string zwierz[10]={"kozica","zubr", "wilk","zbik","rys","niedzwiedz brunatny", "tchorz stepowy", "norka europejska", "gronostaj", "go³ab skalny"};	
	string woj[16]={"Wielkopolskie", "Kujawsko-pomorskie", "Malopolskie", "Lodzkie", "Dolnoslaskie", "Lubelskie", "Lubuskie", "Mazowieckie", "Opolskie", "Podlaskie", "Pomorskie", "Slaskie", "Podkarpackie", "Swietokrzyskie", "Warminsko-Mazurskie", "Zachodniopomorskie"};
	int i=rand() % 10 + 1;
	int y=(rand()%15)+1;
	cout<<"W wojewodztwie "<<woj[y-1]<<" znajduje sie "<<zwierz[i-1];
	return 0;
}
