#include <iostream>
#include <fstream> // MUST HAVE !!!!


using namespace std;

int main()
{
	float a, suma = 0;
	char nazwa[50];
	cout << "Podaj nazwe pliku: " << endl;
	cin >> nazwa;
	ifstream inFile;
	inFile.open(nazwa);
	if (!inFile)
	{
		cout << "Nie otworze pliku :(" << endl;
	}
	while (!inFile.eof())
	{
		inFile >> a;
		if (inFile) {
			suma += a;
		}
	}
	

	

	inFile.close();
	cout << "Suma liczb wynosi :" << suma << endl;

}