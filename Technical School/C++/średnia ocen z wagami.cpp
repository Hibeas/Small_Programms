#include <cstdlib>
#include <iostream>

using namespace std;
void dziennik(){
	bool cos=true;
	double koniec;
	string x,z;
     double oceny[10], wagi[10],o[10];
     int i = 0;
     
     
   // for(i=0;i<10;i++){
     while(cos==true){
     	if (i == 9)
		{ break;}
     cout<<"Podaj swoja ocene (max 10 ocen mozesz podac) "<<endl;
     
     cin>>oceny[i];
     
     cout<<"Sprawdzian -s Praca na leckcji-p"<<endl;
     cin>>z;
     if(z=="s"){
     	wagi[i]=3;
	 }
	 if(z=="p"){
	 	wagi[i]=1;
	 }else{
	 	cout<<"Zla litera, podaj wage";
	 	cin>>wagi[i];
	 }
	 i++;
     cout<<"Jak chcesz zakonyczyc wpisywanie ocen wpisz TAK "<<endl;
	 cin>>x;    
	 if(x=="TAK"){
	 	cos=false;
	 	break;
	 } 
 }//}
cout << i << endl << endl; 
     for(int j=0; j<i;j++){
     
     	o[j] = oceny[j]*wagi[j];
     //	cout<<oceny[j]<<endl<<wagi[j]<<endl<<o[j] << endl;
	 }
	 for(int i=0;i<10;i++){
	 	koniec=koniec+o[i];
	 }
	 koniec = koniec / i;
	 
     cout<<"Srednia twoich ocen to "<<koniec<<endl;
     }
int main(int argc, char *argv[])
{
    dziennik();
    system("PAUSE");
    return EXIT_SUCCESS;
}

	 /*cout<<"Podaj wage tej oceny ";
     cin>>wagi[i];*/
