#include "funkcje.h"
bool naiwny(int n)
{
    char* w = wpisywanie();
    char* t = losowanie(n);
    int dlug_wzor = strlen(w);
    int dlug_tekst = strlen(t);
    int licznik = 0;
    bool ok = 0;

    for (int i = 0; t[i]; i++)
    {
        int j = 0;
        //licznik++;
        while (w[j] != '\0' && t[i + j] == w[j])
            j++; licznik++;
        if (j > 0 && w[j] == '\0') 
        {
            
            ok = 1;

        }
    }
    cout << endl;
    cout << licznik;
    if (ok == 1)
    {
        return true;
    }
    else return false;
    
    
    
    /*for (int i = 0; i <= dlug_tekst - dlug_wzor; i++)
    {
        ok = 1;
        licznik++;

        //sprawdzamy, czy zgadzaj¹ siê pozosta³e znaki
        for (int j = 0; j < dlug_wzor; j++)
            {
            licznik++;
                 if (t[j + i] != w[j]) //jesli nie zgadzaj¹ siê
                {
                    licznik++;
                    ok = 0;  //gdy tu wejdziemy, to ok = 0
                    break;
                }
            }
        if (ok) //jesli wszystkie litery siê zgadzaj¹ (ok = 1)
        {
            cout << "\n\n\n\n\n\n\nWzorzec znaleziono. Poczatek na "
                << i + 1 << " pozycji\n";

            cout << t << endl;

            cout.fill(' ');
            cout.width(i + dlug_wzor);

            cout << w << endl;
            cout << licznik;

            break;
        }
    }
    if (!ok) cout << "\nWzorca nie znaleziono!";*/
   
       
    
    
    
    
    /*for (int i = 0; i <= dlug_tekst - dlug_wzor; i++) //po tekœcie
        {
            int c = 0;
            for (int j = 0; j < dlug_wzor; j++)
            {
                if (w[j] != t[i + c])
                    break;
                if (j == dlug_wzor - 1)
                    return i + 1;
                ++c;
            }
        }
        return -1;
        */






	/*ofstream zapis("naiwy.txt");

	zapis << dlug_tekst << licznik << endl; // ilosc to ilosc elementow w zbiorze w ktorym szukamy, a licznik to ilosc operacji porownania

	zapis.close(); */

}