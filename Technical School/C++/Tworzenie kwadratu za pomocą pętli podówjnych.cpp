#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
void kwadrat(){
	for(int i=1;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<"*";
		}
		cout << endl;
	}
}
int main(int argc, char** argv) {
	kwadrat();
	cout << endl;
	for (int i=1;i<=3;i++){
		kwadrat();
	}
	return 0;
}
