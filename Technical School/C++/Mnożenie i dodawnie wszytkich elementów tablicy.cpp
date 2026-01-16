#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int tab[6][6];
    for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                    tab[i][j]=rand() % 1001 + 1;
            }
    }
    cout<<"Przez jaka liczba pomnozyc"<<endl;
    int a;
    cin>>a;
    for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                    tab[i][j]=tab[i][j]*a;
            }
    }
    cout<<"Jaka liczbe dodac"<<endl;
    cin>>a;
    for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                    tab[i][j]=tab[i][j]+a;
            }
    }
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
