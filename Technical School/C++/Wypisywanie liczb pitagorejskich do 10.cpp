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
	skie=LiczbyPitagorejskie(a,b,c);
	for (int i =1 ; i<=10; i++){
		for ( int x=i; x<=10; x++){
			for(int z=x; z<=10; z++){
				if(LiczbyPitagorejskie(i,x,z) == 1)
				cout<<i<<" "<<x<<" "<<z<<endl;
			}
		}
	}
	

	return 0;
}
