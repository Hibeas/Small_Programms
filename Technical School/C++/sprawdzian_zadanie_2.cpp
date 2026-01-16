#include <iostream>
#include <math.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void pola(){
	int x;
	cout << "1-trojkat 2- kwadrat, 3-trapez, 4-kolo"<<endl;
	 cin >> x;
	 switch(x){
	 	case 1:
	 		int a,b;
	 		cout<<"Podaj bok i wysokosc"<<endl;
	 		cin>>a >>b;
	 		cout << "POLE = "<<a*b/2<<endl;
	 		break;
	 	case 2:
	 		int c;
	 		cout<<"Podaj bok"<<endl;
	 		cin >>c;
	 		cout<<"POLE = "<<c*c<<endl;
	 		break;
	 	case 3:
	 		int d,e,f;
	 		cout<<"Podaj podstawy i wysokosc"<<endl;
	 		cin>>d>>e>>f;
	 		cout<<"POLE = "<<(d+e)*f/2<<endl;
	 		break;
	 	case 4:
	 		int g;
	 		cout<<"Podaj promien"<<endl;
	 		cin >> g;
	 		cout<<"POLE = "<<M_PI*g*g<<endl;
	 }
}
int main(int argc, char** argv) {
	pola();
	return 0;
}
