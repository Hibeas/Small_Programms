#include <iostream>
#include <fstream>


using namespace std;

int main()
{
	ifstream inFile;
	ofstream outFile;
	inFile.open("zad 3.txt");
	int ilosc;
	for(ilosc=0;inFile.get()!=EOF;++ilosc) {}
	cout<<ilosc;
	inFile.close();
	return 0;
}
