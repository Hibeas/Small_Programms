#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    string nazwiska[10];
    string imie[10];
    string x;
    bool pr=true;
    for(int i=0;i<10;i++){
            while(pr==true){
            cout<<"Podaj imie"<<endl;
            cin>>imie[i];
            cout<<"Podaj nazwisko"<<endl;
            cin>>nazwiska[i];
            cout<<"Chcesz skonczyc, jesli tak napisz TAK"<<endl;
            cin>>x;
            if(x=="TAK"){
                         pr=false;}
            }}
    for(int i=0;i<10;i++){        
    cout<<"Imie : "<<imie[i]<<"Nazwisko : "<<nazwiska[i];
}
    system("PAUSE");
    return EXIT_SUCCESS;
}
