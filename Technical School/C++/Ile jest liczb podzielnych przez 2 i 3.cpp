#include <iostream>
using namespace std;

int main(){
    int k=0;
    for(int i=-200;i<250;i++){
        if(i%3==0){
            if(i%2==0){
                k++;
            }
        }
    }
    cout<<k;
    return 0;
}