#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct portfel{
	int bilony;
	int banknoty;
};
int main(int argc, char** argv) {
	portfel portfel_a, portfel_b;
	cout<<"Podaj liczbe bilonow i banknotow w portfel a" <<endl;
	cin>>portfel_a.bilony>>portfel_a.banknoty;
	cout<<"Podaj liczbe bilonow i banknotow w portfel b" <<endl;
	cin>>portfel_b.bilony>>portfel_b.banknoty;
	
	if(portfel_a.banknoty>portfel_b.banknoty){
		cout<<"W portfelu a jest wiecej banknotow"<<endl;
	}else if(portfel_a.banknoty<portfel_b.banknoty){
		cout<<"W portfelu b jest wiecej banknotow"<<endl;
	}else{
		cout<<"W obu portfelach jest tyle samo banknotow"<<endl;
	}
	if(portfel_a.bilony==0){
		cout<<"w portfelu a jest 0 bilonow"<<endl;
	}
		if(portfel_b.bilony==0){
		cout<<"w portfelu b jest 0 bilonow"<<endl;
	}
		if(portfel_b.banknoty==0){
		cout<<"w portfelu b jest 0 banknotow"<<endl;
	}
		if(portfel_b.banknoty==0){
		cout<<"w portfelu b jest 0 banknotow"<<endl;
	}
	
	
	
	
	if(portfel_a.bilony>portfel_b.bilony){
		cout<<"W portfelu a jest wiecej bilonow"<<endl;
	}else if(portfel_a.bilony<portfel_b.bilony){
		cout<<"W portfelu b jest wiecej bilonow"<<endl;
	}else{
		cout<<"W obu portfelach jest tyle samo bilonow"<<endl;
	}
	return 0;
}
