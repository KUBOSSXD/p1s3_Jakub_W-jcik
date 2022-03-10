#include "funkcje.h"

char* losowanie(int a)
{
	char* tekst = new char[a];
    srand(time(NULL));
    static const int iloscLiter = 'z' - 'a';
	for (int i = 0; i < a; i++)
    {
                tekst[i] = rand() % (iloscLiter + 1) + 'a';
	}
	for (int j=0; j < a; j++)
	{
		cout << tekst[j];
	}
	tekst[a - 1] = '\0';
	return tekst;
}