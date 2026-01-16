#include <iostream>

using namespace std;
int popul=1; int godz=0;
int main()
{
    while(popul <=1000000000){
        godz++;
        popul = popul * 2;
        cout << "  mienlo  " << godz;
        cout << "  bakteri  " << popul;
    }
    return 0;
}
