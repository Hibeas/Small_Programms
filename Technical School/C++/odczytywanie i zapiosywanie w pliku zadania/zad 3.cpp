#include <iostream>
#include <fstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
		ofstream outFile;
	outFile.open("odp2.txt");
	int wynik[5];
	cout << "Podaj liczby"<<endl;
	for(int i=0; i<5; i++){
		cin>>wynik[i];
	}
	for(int i=0;i<5;i++){
		if(wynik[i]%2==0){
			wynik[i]=wynik[i]*10;
		}
		if(wynik[i]%9==0){
			wynik[i]=wynik[i]/3;
		}
	}
	for(int i=0;i<5;i++){
		outFile << wynik[i] << " ";
	}
	outFile.close();
	return 0;
}
