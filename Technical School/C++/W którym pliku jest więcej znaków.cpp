#include <cstdlib>
#include <iostream>
#include<fstream>
using namespace std;

int main(int argc, char *argv[])
{
    ifstream inFile;
	ifstream File;
	inFile.open("plik1.txt");
	File.open("plik2.txt");
    int count;
    int count2;
    for(count=0;inFile.get()!=EOF;++count){}
    for(count2=0;File.get()!=EOF;++count2){}
    
	cout<<"W plik1 znajduje sie "<<count<<" znakow "<<endl<<"w plik2 znajduje sie "<<count2<<" znakow"<<endl;
	if(count>count2){
		cout<<"Wiec w pliku 1 jest wiecej znakow"<<endl;
	}
	if(count<count2){
		cout<<"Wiec w pliku 2 jest wiecej znakow"<<endl;
	}
	if(count==count2){
		cout<<"W obu plikach jest "<<count<<" znakow a ich suma to "<<count+count2<<endl;
	}
    inFile.close();
    File.close();
	system("PAUSE");
    return EXIT_SUCCESS;
}
