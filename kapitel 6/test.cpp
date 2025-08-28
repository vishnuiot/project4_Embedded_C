#include <iostream>
using namespace std;

int main()
{
    double preis[3];

    preis[0] = 3.4;
    preis[1] = 3.1;
    preis[2] = 2.8;

    for (int i = 0; i < 3; i++)
        cout << "Element " << i << ": " << preis[i] << endl;
    double summe = 0.0;
    for (const double &p : preis)

        // Print the final sum once, after the loop.
        cout << "Summe: " << summe << endl;

    return 0;
}