
#include <iostream>
using namespace std;
int main ()
{
int a;
int b;

a=100;

cout << 2 << endl;

for (int c=3; c<=a; c++)
{
b = 0;

for (int i = 2; i < c; i++)
{
if (!(c%i))
{
b = 1;
break;
}
}

if (!b)
{
cout << c << endl;
}
}
}
