#include "funkcje.h"
char* wpisywanie()
{
	int n;
	char j;
	cout << "podaj dlugosc wzorca\n";
	cin >> n;
	char* wzorzec = new char[n+1];
	cout << "\npodaj wzorzec\n";
	for (int i = 0; i < n; i++)
	{
		cin>>j;
		wzorzec[i]= j;
	}
	wzorzec[n] = '\0';
	return wzorzec;
}