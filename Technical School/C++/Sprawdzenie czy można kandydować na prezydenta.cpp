#include <iostream>

using namespace std;
int wiek;
int main()
{
    cout << "ile masz lat: ";
    cin >> wiek;
    if (wiek<18)
    {
        cout << "nie jestes pelnoletni i nie mozesz zostac prezydentem"<<endl;
    }
    else if ((wiek>=18)&&(wiek<35))
        cout << "jestes pelnoletni, ale nie mozesz kadydowac na prezydenta"<<endl;
    else
    cout << "jestes pelnoletni i mozesz kandydowac na prezdydenta"<<endl;
    return 0;
}
