#include<iostream>
#include<ctime>
#include <stdlib.h>



using namespace std;
// <1, 6> 
int main() {
	srand((unsigned) time(0)); // Must Have !!!!
	int a , b;
	a = rand() % 6 + 1;
	cout << a << endl;
	b = rand() % 6 + 1;
	cout << b << endl;
	
}