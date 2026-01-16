// Homework.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdlib>
#include <iostream>
using namespace std;
void Babelkowe(int tab[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (tab[j] > tab[j + 1])
                swap(tab[j], tab[j + 1]);

        }
    }
}


int main()
{
    cout << "Praca Domowa - 5 metod sortowania tablicy" << endl;
    int tab[100 000];
    for (int i = 0; i < 100000; i++) {
        tab[i]= rand() % 100 + 1;
    }
    Babelkowe(tab[100 000], 100 000);


}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
