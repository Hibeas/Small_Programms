#include <iostream>
#include <math.io>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	cout << "1 -dodawanie "<<endl<<"2 - odejmowanie "<<endl<<"3-mnożenie"<<endl<<"4-dzielenie";
	int x;
	cin >> x;
	float a, b;
	cout << "Podaj liczby";
	cin >> a;
	cin >> b;
	switch (x) {
  case 1:
    cout << a<<" + "<<b<<" = "<<a+b;
    break;
  case 2:
    cout << a<<" - "<<b<<" = "<<a-b;
    break;
  case 3:
    cout << a<<" * "<<b<<" = "<<a*b;
    break;
  case 4:
    cout << a<<" / "<<b<<" = "<<a/b;
    break;
}


	return 0;
}
