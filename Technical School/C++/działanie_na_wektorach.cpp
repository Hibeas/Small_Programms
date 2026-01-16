#include <iostream>
#include <math.h>
using namespace std;

struct wektor2d
{
	float x;
	float y;

};




int main() {
	wektor2d a,b,c;
	cin >> a.x;
	cin >> a.y;
	cin >> b.x;
	cin >> b.y;
	cin >> c.x;
	cin >> c.y;
	float wynik=(a.x*b.x)+(a.y*b.y);
	cout << wynik <<endl;
	float wunik=sqrt(pow(c.x,2)-pow(c.y,2));
	float wznik=sqrt(pow(a.x,2)-pow(a.y,2));
	float wenik=sqrt(pow(b.x,2)-pow(b.y,2));
	float tr=wunik+wznik+wenik;
	cout << "obw = " <<tr;

}


