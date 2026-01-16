#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int tab[10];
    for(int i=0;i<10;i++){
            tab[i]=rand() %10+ 1;
}
for(int i=0;i<10;i++){
        cout<<tab[i]<<endl;
        }
 cout<<"1- dodawnia, 2-mnozesnie"<<endl;
 int x;
 int y;
 cin>>x;
 switch(x){
           case 1:
                cout<<"Podaj liczbe"<<endl;
                cin>>y;
                for(int i=0;i<10;i++){
                        tab[i]=tab[i]+y;}
                for(int i=0;i<10;i++){
        cout<<tab[i]<<endl;
        }
           break;


           case 2:
           cout<<"Podaj liczbe"<<endl;
           cin>>y;
                for(int i=0;i<10;i++){
                        tab[i]=tab[i]*y;}
                for(int i=0;i<10;i++){
        cout<<tab[i]<<endl;
        }
           break;
           }
    system("PAUSE");
    return EXIT_SUCCESS;
}
