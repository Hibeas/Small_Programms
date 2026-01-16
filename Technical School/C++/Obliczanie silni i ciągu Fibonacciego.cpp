#include <cstdlib>
#include <iostream>
#include <cstdlib>
unsigned int fib(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fib(n-1)+fib(n-2);
}
unsigned int fibo(int n)
{
    if(n == 0) return 0;
    if(n == 1) return 1;
    return fibo(n-1)+fibo(n-2);
}

             
using namespace std;

int main(int argc, char *argv[])
{
    unsigned int b;
    long long silnia =1;
    int x;
    int n;
    int ilosc;
    cout<<"1-ciag fibonacciego, 2-silnia"<<endl;
    cin>>x;
    switch(x){
              case 1:
                  cout << "Podaj ile wyrazow wypisac:" << endl;
  				  cin >> ilosc;

  				  for (int i = 0; i<=ilosc; i++)
     			   cout << fib(i) << ", "<<endl;
     			   cout << "Podaj numer wyrazu ciagu fibonacciego do obliczenia:" << endl;
  					  cin >> n;

  					  cout << fib(n) << endl;
            	  break;
              
              case 2:
                   cout<<"Podaj liczbe: "<<endl;
                   cin>>b;
                   for(int i=b;i>1;i--){
                           silnia*=i;}
                   cout<<b<<"! = "<<silnia<<endl;
              break;
              }
    system("PAUSE");
    return EXIT_SUCCESS;
}
