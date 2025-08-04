#include <iostream>
using namespace std;

int main()
{
    double anzahl, preis, summe = 0;
    while (true)
    {
        cout << "anzahl eingeben zwischen 0 und 10" << endl;
        cin >> anzahl;
        if (anzahl == 0)
            break;
        else if (anzahl < 0)
        continue;
        cout << "preis eingeben" << endl;
        cin >> preis;
        summe =summe+ anzahl * preis;
        
    }
    cout << "Total_summe = " << summe << "euro" << endl;
}