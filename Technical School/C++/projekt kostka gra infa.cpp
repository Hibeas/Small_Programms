#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
struct gracz{
	string nick;
	
	int extra1_1=0;
	int extra2_1=0;
	int extra3_1=0;
	int extra4_1=0;
	int extra5_1=0;
	int extra6_1=0;
	int extra1_2=0;
	int extra2_2=0;
	int extra3_2=0;
	int extra4_2=0;
	int extra5_2=0;
	int extra6_2=0;
	
	int rzut1_1=0;
	int rzut2_1=0;
	int rzut3_1=0;
	int rzut4_1=0;
	int rzut5_1=0;
	int rzut6_1=0;
	int rzut1_2=0;
	int rzut2_2=0;
	int rzut3_2=0;
	int rzut4_2=0;
	int rzut5_2=0;
	int rzut6_2=0;
};

using namespace std;


int main()
{
    int liczba_graczy=0, rzut1=0, rzut2=0, wyniki_1[4], wyniki_2[4],x=0,extra_1[4],extra_2[4],rzut1_extra=0,rzut2_extra=0;
    int j=1;
    string wygrana[6];
	string nicki[4];
    srand((unsigned)time(0));
    for(int i=0;i<4;i++){
    	wyniki_1[i]=0;
	}
	for(int i=0;i<4;i++){
    	wyniki_2[i]=0;
	}
	for(int i=0;i<4;i++){
    	extra_1[i]=0;
	}
	for(int i=0;i<4;i++){
    	extra_2[i]=0;
	}
	for(int i=0;i<4;i++){
    	nicki[i]="-";
	}
    gracz pierwszy;
    gracz drugi;
    gracz trzeci;
    gracz czwarty;
    
    //liczba graczy + sprawdzanie jej
	cout << "Ilu graczy jest przy stole (max4)" << endl;
    cin >> liczba_graczy;
    bool liczba=true;
    while(liczba==true){
    	if(liczba_graczy>4){
    		cout<<"Niedozwolona liczba graczy, podaj jeszcze raz "<<endl;;
    		cin>>liczba_graczy;
		}else{
			liczba=false;
		}
	}
	
  
    //wpisuje nicki w tabele jednowymiarow¹ nicki
    for(int i=0;i<liczba_graczy;i++){
    	cout<<"Podaj nick "<<i+1<<" gracza"<<endl;
    	cin>>nicki[i];
	}
	pierwszy.nick = nicki[0];
	drugi.nick = nicki[1];
	trzeci.nick = nicki[2];
	czwarty.nick = nicki[3];
    
    //pocz¹tek gry
	for(int g=0;g<6;g++){
		//by po ka¿dej rudzie pyta³ siê czy przejœæ do kolejnej
		int max=0;
		int wynik[4];
		
		wynik[0]=0;
		wynik[1]=0;
		wynik[2]=0;
		wynik[3]=0;
		if(g>0){
			cout<<"Wpisz OK by przejsc do kolejnej rundy"<<endl;
			string ok;
			cin>>ok;
		}
		cout<<endl<<endl<<"Runda "<<j<<endl;
		j++;
		
		//rzut koœci¹
        for (int i = 0; i < liczba_graczy; i++)
        {
            rzut1 = rand() % 6 + 1;
            rzut2 = rand() % 6 + 1;
            wyniki_1[i] = rzut1;
            wyniki_2[i] = rzut2;

        }
        
        //wypisywanie wyników + szukanie wygranego rundy
        for (int i = 0; i < liczba_graczy; i++)
        {
        	cout<< "GRACZ "<<nicki[i]<<endl;
            cout << nicki[i] << " uzyskal z jednej kostki " << wyniki_1[i] << endl;
            cout << nicki[i] << " uzyskal z drugiej kostki " << wyniki_2[i] << endl;
            //jeœli wyrzuci³ dwie 6
			if(wyniki_1[i]==6 && wyniki_2[i]==6){
				cout<<"Gracz "<<"rzuca jeszcze raz (wyrzucil 2 szostki)"<<endl;
				rzut1_extra = rand() % 6 + 1;
            	rzut2_extra = rand() % 6 + 1;
            	extra_1[i]=rzut1_extra;
            	extra_2[i]=rzut2_extra;
            	cout << nicki[i] << " uzyskal z jednej kostki " << rzut1_extra << endl;
          		cout << nicki[i] << " uzyskal z drugiej kostki " << rzut2_extra << endl;
			}
			if(wyniki_1[i]%2==0&&wyniki_2[i]%2==0){
				cout<<" +1 za parzystosc"<<endl;
				wynik[i] = wyniki_1[i]+ wyniki_2[i]+rzut1_extra+rzut2_extra+1;
			}else if(wyniki_1[i]==1&&wyniki_2[i]==1){
				wynik[i] = 0;
			}else {
			wynik[i] = wyniki_1[i]+ wyniki_2[i]+rzut1_extra+rzut2_extra;
		}
			cout<<"Wynik = "<<wynik[i]<<endl<<endl;
            max = wynik[0]; 
        }
        
        
        for(int i=0;i<liczba_graczy;i++){
        	for(int j=i;j<liczba_graczy;j++){
        		if(wynik[i]==wynik[j]&&i!=j){
        			cout<<"Gracze z z rownymi wynikami ("<<wynik[i]<<") beda jescze raz rzucac koscia "<<endl;
        			int c=rand() % 6 + 1;
        			int d=rand() % 6 + 1;
        			wyniki_1[i]=c;
        			wyniki_2[i]=d;
        			d=rand() % 6 + 1;
					c=rand() % 6 + 1;
					wyniki_1[j]=c;
        			wyniki_2[j]=d;
        			cout<<"Ich wyniki to "<<wyniki_1[i]<<" "<<wyniki_2[i]<<" oraz "<<wyniki_1[j]<<" "<<wyniki_2[j]<<endl;
				}
			}
		}for(int i=0;i<liczba_graczy;i++){
		if(wyniki_1[i]%2==0&&wyniki_2[i]%2==0){
				wynik[i] = wyniki_1[i]+ wyniki_2[i]+rzut1_extra+rzut2_extra+1;
			}else if(wyniki_1[i]==1&&wyniki_2[i]==1){
				wynik[i] = 0;
			}else {
			wynik[i] = wyniki_1[i]+ wyniki_2[i]+rzut1_extra+rzut2_extra;
		}
            max = wynik[0]; 
        }
        cout<<"KONCOWE WYNIKI "<< endl;
        for (int d = 0; d < liczba_graczy;d++)
        {
        	cout << "Gracz " << nicki[d] << " " << wynik[d] << endl;
		}
       
	   
	    for(int i=0;i<liczba_graczy;i++){ //przeszukanie pozosta³ych 9 liczb
		if(max<wynik[i]){
			max = wynik[i];
			x=i;
		}}
		
		
		cout<<"Te runde wygral "<<nicki[x] <<" z wynikiem "<<max<<endl;
		wygrana[g]=nicki[x];
	
        
		//przypisywanie wyników do structury
		if(g==0){
			pierwszy.rzut1_1=wyniki_1[0];
			pierwszy.rzut1_2=wyniki_2[0];
			pierwszy.extra1_1=extra_1[0];
			pierwszy.extra1_2=extra_2[0];
			drugi.rzut1_1=wyniki_1[1];
			drugi.rzut1_2=wyniki_2[1];
			drugi.extra1_1=extra_1[1];
			drugi.extra1_2=extra_2[1];
			trzeci.rzut1_1=wyniki_1[2];
			trzeci.rzut1_2=wyniki_2[2];
			trzeci.extra1_1=extra_1[2];
			trzeci.extra1_2=extra_2[2];
			czwarty.rzut1_1=wyniki_1[3];
			czwarty.rzut1_2=wyniki_2[3];
			czwarty.extra1_1=extra_1[3];
			czwarty.extra1_2=extra_2[3];
		}else if(g==1){
			pierwszy.rzut2_1=wyniki_1[0];
			pierwszy.rzut2_2=wyniki_2[0];
			pierwszy.extra2_1=extra_1[0];
			pierwszy.extra2_2=extra_2[0];
			drugi.rzut2_1=wyniki_1[1];
			drugi.rzut2_2=wyniki_2[1];
			drugi.extra2_1=extra_1[1];
			drugi.extra2_2=extra_2[1];
			trzeci.rzut2_1=wyniki_1[2];
			trzeci.rzut2_2=wyniki_2[2];
			trzeci.extra2_1=extra_1[2];
			trzeci.extra2_2=extra_2[2];
			czwarty.rzut2_1=wyniki_1[3];
			czwarty.rzut2_2=wyniki_2[3];
			czwarty.extra2_1=extra_1[3];
			czwarty.extra2_2=extra_2[3];
		}else if(g==2){
			pierwszy.rzut3_1=wyniki_1[0];
			pierwszy.rzut3_2=wyniki_2[0];
			pierwszy.extra3_1=extra_1[0];
			pierwszy.extra3_2=extra_2[0];
			drugi.rzut3_1=wyniki_1[1];
			drugi.rzut3_2=wyniki_2[1];
			drugi.extra3_1=extra_1[1];
			drugi.extra3_2=extra_2[1];
			trzeci.rzut3_1=wyniki_1[2];
			trzeci.rzut3_2=wyniki_2[2];
			trzeci.extra3_1=extra_1[2];
			trzeci.extra3_2=extra_2[2];
			czwarty.rzut3_1=wyniki_1[3];
			czwarty.rzut3_2=wyniki_2[3];
			czwarty.extra3_1=extra_1[3];
			czwarty.extra3_2=extra_2[3];
		}else if(g==3){
			pierwszy.rzut4_1=wyniki_1[0];
			pierwszy.rzut4_2=wyniki_2[0];
			pierwszy.extra4_1=extra_1[0];
			pierwszy.extra4_2=extra_2[0];
			drugi.rzut4_1=wyniki_1[1];
			drugi.rzut4_2=wyniki_2[1];
			drugi.extra4_1=extra_1[1];
			drugi.extra4_2=extra_2[1];
			trzeci.rzut4_1=wyniki_1[2];
			trzeci.rzut4_2=wyniki_2[2];
			trzeci.extra4_1=extra_1[2];
			trzeci.extra4_2=extra_2[2];
			czwarty.rzut4_1=wyniki_1[3];
			czwarty.rzut4_2=wyniki_2[3];
			czwarty.extra4_1=extra_1[3];
			czwarty.extra4_2=extra_2[3];
		}else if(g==4){
			pierwszy.rzut5_1=wyniki_1[0];
			pierwszy.rzut5_2=wyniki_2[0];
			pierwszy.extra5_1=extra_1[0];
			pierwszy.extra5_2=extra_2[0];
			drugi.rzut5_1=wyniki_1[1];
			drugi.rzut5_2=wyniki_2[1];
			drugi.extra5_1=extra_1[1];
			drugi.extra5_2=extra_2[1];
			trzeci.rzut5_1=wyniki_1[2];
			trzeci.rzut5_2=wyniki_2[2];
			trzeci.extra5_1=extra_1[2];
			trzeci.extra5_2=extra_2[2];
			czwarty.rzut5_1=wyniki_1[3];
			czwarty.rzut5_2=wyniki_2[3];
			czwarty.extra5_1=extra_1[3];
			czwarty.extra5_2=extra_2[3];
		}else if(g==5){
			pierwszy.rzut6_1=wyniki_1[0];
			pierwszy.rzut6_2=wyniki_2[0];
			pierwszy.extra6_1=extra_1[0];
			pierwszy.extra6_2=extra_2[0];
			drugi.rzut6_1=wyniki_1[1];
			drugi.rzut6_2=wyniki_2[1];
			drugi.extra6_1=extra_1[1];
			drugi.extra6_2=extra_2[1];
			trzeci.rzut6_1=wyniki_1[2];
			trzeci.rzut6_2=wyniki_2[2];
			trzeci.extra6_1=extra_1[2];
			trzeci.extra6_2=extra_2[2];
			czwarty.rzut6_1=wyniki_1[3];
			czwarty.rzut6_2=wyniki_2[3];
			czwarty.extra6_1=extra_1[3];
			czwarty.extra6_2=extra_2[3];
			//szukanie zwyciescy
        
		
			cout<<endl<<endl<<endl<<endl<<endl<<"	TABLICA Z WYNIKAMI	"<<endl;//myslê ¿ê Ÿle trochê zrobi³em tablicê wyników (po prostu wypisa³em wszystkie rzuty), ale przecie¿ mo¿na sobie obliczyæ kto wygra³ i by³oby mi smutno usuwaæ du¿¹ czêœæ kodu
			//tabela z wynikami
			cout<<"	GRACZE			"<<nicki[0]<<"		"<<nicki[1]<<"		"<<nicki[2]<<"		"<<nicki[3]<<endl;
			cout<<"	RUNDA 1_1		"<<pierwszy.rzut1_1<<"		"<<drugi.rzut1_1<<"		"<<trzeci.rzut1_1<<"		"<<czwarty.rzut1_1<<endl;
			cout<<"	RUNDA 1_2		"<<pierwszy.rzut1_2<<"		"<<drugi.rzut1_2<<"		"<<trzeci.rzut1_2<<"		"<<czwarty.rzut1_2<<endl;
			cout<<"	RUNDA 1_extra_1		"<<pierwszy.extra1_1<<"		"<<drugi.extra1_1<<"		"<<trzeci.extra1_1<<"		"<<czwarty.extra1_1<<endl;
			cout<<"	RUNDA 1_extra_2		"<<pierwszy.extra1_2<<"		"<<drugi.extra1_2<<"		"<<trzeci.extra1_2<<"		"<<czwarty.extra1_2<<endl;
			
			cout<<"	RUNDA 2_1		"<<pierwszy.rzut2_1<<"		"<<drugi.rzut2_1<<"		"<<trzeci.rzut2_1<<"		"<<czwarty.rzut2_1<<endl;
			cout<<"	RUNDA 2_2		"<<pierwszy.rzut2_2<<"		"<<drugi.rzut2_2<<"		"<<trzeci.rzut2_2<<"		"<<czwarty.rzut2_2<<endl;
			cout<<"	RUNDA 2_extra_1		"<<pierwszy.extra2_1<<"		"<<drugi.extra2_1<<"		"<<trzeci.extra2_1<<"		"<<czwarty.extra2_1<<endl;
			cout<<"	RUNDA 2_extra_2		"<<pierwszy.extra2_2<<"		"<<drugi.extra2_2<<"		"<<trzeci.extra2_2<<"		"<<czwarty.extra2_2<<endl;
			
			cout<<"	RUNDA 3_1		"<<pierwszy.rzut3_1<<"		"<<drugi.rzut3_1<<"		"<<trzeci.rzut3_1<<"		"<<czwarty.rzut3_1<<endl;
			cout<<"	RUNDA 3_2		"<<pierwszy.rzut3_2<<"		"<<drugi.rzut3_2<<"		"<<trzeci.rzut3_2<<"		"<<czwarty.rzut3_2<<endl;
			cout<<"	RUNDA 3_extra_1		"<<pierwszy.extra3_1<<"		"<<drugi.extra3_1<<"		"<<trzeci.extra3_1<<"		"<<czwarty.extra3_1<<endl;
			cout<<"	RUNDA 3_extra_2		"<<pierwszy.extra3_2<<"		"<<drugi.extra3_2<<"		"<<trzeci.extra3_2<<"		"<<czwarty.extra3_2<<endl;
			
			cout<<"	RUNDA 4_1		"<<pierwszy.rzut4_1<<"		"<<drugi.rzut4_1<<"		"<<trzeci.rzut4_1<<"		"<<czwarty.rzut4_1<<endl;
			cout<<"	RUNDA 4_2		"<<pierwszy.rzut4_2<<"		"<<drugi.rzut4_2<<"		"<<trzeci.rzut4_2<<"		"<<czwarty.rzut4_2<<endl;
			cout<<"	RUNDA 4_extra_1		"<<pierwszy.extra4_1<<"		"<<drugi.extra4_1<<"		"<<trzeci.extra4_1<<"		"<<czwarty.extra4_1<<endl;
			cout<<"	RUNDA 4_extra_2		"<<pierwszy.extra4_2<<"		"<<drugi.extra4_2<<"		"<<trzeci.extra4_2<<"		"<<czwarty.extra4_2<<endl;
			
			cout<<"	RUNDA 5_1		"<<pierwszy.rzut5_1<<"		"<<drugi.rzut5_1<<"		"<<trzeci.rzut5_1<<"		"<<czwarty.rzut5_1<<endl;
			cout<<"	RUNDA 5_2		"<<pierwszy.rzut5_2<<"		"<<drugi.rzut5_2<<"		"<<trzeci.rzut5_2<<"		"<<czwarty.rzut5_2<<endl;
			cout<<"	RUNDA 5_extra_1		"<<pierwszy.extra5_1<<"		"<<drugi.extra5_1<<"		"<<trzeci.extra5_1<<"		"<<czwarty.extra5_1<<endl;
			cout<<"	RUNDA 5_extra_2		"<<pierwszy.extra5_2<<"		"<<drugi.extra5_2<<"		"<<trzeci.extra5_2<<"		"<<czwarty.extra5_2<<endl;
			
			cout<<"	RUNDA 6_1		"<<pierwszy.rzut6_1<<"		"<<drugi.rzut6_1<<"		"<<trzeci.rzut6_1<<"		"<<czwarty.rzut6_1<<endl;
			cout<<"	RUNDA 6_2		"<<pierwszy.rzut6_2<<"		"<<drugi.rzut6_2<<"		"<<trzeci.rzut6_2<<"		"<<czwarty.rzut6_2<<endl;
			cout<<"	RUNDA 6_extra_1		"<<pierwszy.extra6_1<<"		"<<drugi.extra6_1<<"		"<<trzeci.extra6_1<<"		"<<czwarty.extra6_1<<endl;
			cout<<"	RUNDA 6_extra_2		"<<pierwszy.extra6_2<<"		"<<drugi.extra6_2<<"		"<<trzeci.extra6_2<<"		"<<czwarty.extra6_2<<endl;
			
			//tablica wygranych
			cout<<endl<<endl<<"		TABLICA WYGRANYCH"<<endl;
			cout<<"Zwyciesca 1 rundy "<<wygrana[0]<<endl;
			cout<<"Zwyciesca 2 rundy "<<wygrana[1]<<endl;
			cout<<"Zwyciesca 3 rundy "<<wygrana[2]<<endl;
			cout<<"Zwyciesca 4 rundy "<<wygrana[3]<<endl;
			cout<<"Zwyciesca 5 rundy "<<wygrana[4]<<endl;
			cout<<"Zwyciesca 6 rundy "<<wygrana[5]<<endl;
					}
	}
}
