#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 3> preis;
    preis.at(0) = 3.4;
    preis.at(1) = 3.1;
    preis.at(2) = 3.4;

    for (int i = 0; i < 3; i++)
        cout << "Element " << i << ": " << preis[i] << endl;

    double summe = 0.0;
    for (const double &p : preis)
        summe += p;
    // Print the final sum once, after the loop.
    cout << "Summe: " << summe << endl;

    return 0;
}