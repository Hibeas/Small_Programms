#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>

using namespace std;

int main()
{
	float a, b;
	ofstream outFile;
	outFile.open("odp.txt");
	int wynik[100];

	
	for(int i=0;i<100;i++){
		wynik[i]= ((rand()%100)+1);
		outFile << wynik[i] << " ";
	}
	
	outFile.close();
}
