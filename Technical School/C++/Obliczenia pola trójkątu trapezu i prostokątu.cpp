#include <iostream>
using namespace std;
void trojkat (int a, int h, int c){
    cout << "podaj wysokoœc";
    cin >> h;
    cout << "poadj bok";
    cin >> a;
    c = a * h/2;
    cout << "P=" << c << endl;
}
void trapez (int a, int b, int h){
    int c;
    cout << "podaj podstawe";
    cin >> a;
    cout << "podaj gorna podstawe";
    cin >> b;
    cout << "podaj wysokoœc";
    cin >> h;
    c = (a+b)*h/2;
    cout << "p=" << c << endl;
}
void romb (int a, int b, int c)
{
	cout << "podaj wysokosæ";
	cin >> a;
	cout << "podaj bok";
	cin >> b;
	c=a*b;
	cout << "p=" << c << endl
	;
}



int main(){
    cout << "Hello world!" << endl;
    trojkat (1 , 2, 3);
    trapez (1, 2, 3);
    romb (1, 2, 3);
    return 0;
}
