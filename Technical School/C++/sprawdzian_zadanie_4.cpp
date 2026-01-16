#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x,y,z;
	cout<<"Podaj 3 liczby "<<endl;
	cin>>x>>y>>z;
	if(x*x +y*y==z*z){
		int a= x+y+z;
		a=a/15;
		a=a*20;
		cout<<"Dokonano operacji matematycznych wymagancyh gdy liczby byly trojka pitagorejska  "<<a<<endl;
	}else{
		int b=x+y+z;
		b=b%7;
		cout<<"Reszta sumy dzielonej przez 7 to "<<b<<endl;
	}
	return 0;
}
