#include<iostream>

using namespace std;
void mex(int tab[], int max){
		for(int i=0;i<10;i++){
		if(max<tab[i])
			max = tab[i];
			
	}
		cout<<"Najwieksza wczytana liczba jest "<<max<<endl;

}
void men (int tab[], int min){
	for(int i=0;i<10;i++){
		if(min>tab[i])
			min = tab[i];
	}
	cout << "Najmniejsza wyczytana liczba jest " <<min<<endl;
}


int main() {
	int max, min;
	int tab[10] = { 35, 2, 5, 18, 20, 33, 40 ,99 ,22, 33 };
	max = tab[0];
	min = tab[0];
    mex(tab, max);
    men(tab, min);

	return 0;
}
