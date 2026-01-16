#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x;
	cout << "Podaj liczbe: ";
	cin >> x;
	if (x%2==0&&x%4==0)
		cout<<"liczba jest parzysta i podzielna przez 4";
	else
		if(x%2==0) 
			cout <<"Liczba jest parzysta, ale nie jest podzielna przez 4";
	if (x%2==1) 
		cout << "Liczba jest nieparzysta";
	
		
	return 0;
}
