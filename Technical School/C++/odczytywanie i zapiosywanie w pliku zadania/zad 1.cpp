#include <iostream>
#include <fstream>
#include <math.h>

using namespace std;

int main()
{
	float a, b, h, pole_t_p, pole_tr, obwod_tr, pole_pr, obwod_pr;
	ifstream inFile;
	ofstream outFile;
	inFile.open("liczby.txt");
	inFile >> a >> b >> h;
	
	//trójk¹t prostok¹tny
	float obwod_t_p = a+b+h;
	cout << "Wynik obwodu trojkata prostokatnego wynosi:" << obwod_t_p<<endl;
	pole_t_p = a * b/2;
	cout << "Wynik pola trojkata prostokatnego wynosi:" << pole_t_p<<endl;
	
	//trapez MUSI BYÆ RÓWNORAMIENNY gdy¿ u innego nie obliczymy obwodu
	float z=((b-a)/2)*((b-a)/2);
	float x=sqrt(h*h + z);
	obwod_tr=a+b+2*x;
	cout << "Wynik obwodu trapezu wynosi:" << obwod_tr<<endl;
	pole_tr = (a + b)*h/2;
	cout << "Wynik pola trapezu wynosi:" << pole_tr<<endl;
	
	//prostok¹t
	obwod_pr=2*a+2*b;
	cout << "Wynik obwodu prostokata wynosi:" << obwod_pr<<endl;
	pole_pr=a*b;
	cout << "Wynik pola prostokata wynosi:" << pole_pr<<endl;
	cout<<"A = "<<a<<"  B = "<<b<<"  H = "<<h<<endl;
	inFile.close();
}
