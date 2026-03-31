#include <iostream>
#include <array>
#include <iomanip>
#include <string>
using namespace std;

void aendern(double *pz)
{
    *pz = *pz + 0.1;
}

int main()
{
    double preis = 1.45;
    double *preiszeiger = nullptr;
    preiszeiger = &preis;
    cout << "*preiszeiger =" << *preiszeiger << endl;

    *preiszeiger = 0.85;
    cout<<"Reassigned *preiszeiger to 0.85";
    cout << "*preiszeiger =" << *preiszeiger << endl;

    cout << "Therefore now pres = "<<preis << endl;

    aendern(&preis);
    cout << preis << endl;

    aendern(preiszeiger);
    cout << preis << endl;

    return 0;
}