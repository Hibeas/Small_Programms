#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void tablica(int tab[][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cout << "Podaj liczbe "<< endl;
			cin >> tab[i][j];
		}
	}
}
int duzy(int tab[][3]){
	int mex[3];
	mex[0]=tab[0][0];
	mex[1]=tab[1][0];
	mex[2]=tab[2][0];
	int men=tab[0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(tab[i][j]>mex[i]){
				mex[i]=tab[i][j];
			}
			if(tab[i][j]<men)
				men=tab[i][j];
		}
	}
	cout << mex[0]*men << " " << mex[1]*men<< " "<< mex[2]*men<<" ";
	
	return 0;
}


int main(int argc, char** argv) {
		int tab[3][3];
		tablica(tab);
		duzy(tab);
	return 0;
}
