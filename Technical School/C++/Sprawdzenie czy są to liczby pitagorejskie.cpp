#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int LiczbyPitagorejskie(int a, int b,int c){
	int x, skie;
	if (a*a + b*b == c*c)
	{
		return 1;
	}
	else
return 0;
}
	
int main(int argc, char** argv) {
	int a, b, c, skie;
	cout<<"Podaj liczby :";
	cin>>a;
	cin>>b;
	cin>>c;
	skie=LiczbyPitagorejskie(a,b,c);
	
	cout << skie;
	return 0;
}
