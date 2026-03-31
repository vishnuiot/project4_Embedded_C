#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<double, 3> preis;
    preis.at(0) = 3.4;
    preis.at(1) = 3.1;
    preis.at(2) = 7.4;

    try
    {
        cout << "Element mit []" << preis[2] << endl;
        cout << "Element mit at()" << preis.at(2) << endl;
        cout << "Element 5 mit []" << preis[5] << endl;
        cout << "Element 5 mit at()" << preis.at(5) << endl;
        cout << "Ende des try blocks" << endl;
    }
    catch (const std::exception &e)
    {
        cout << "Fehler" << e.what() << endl;
    }

    cout<<"Nach der Ausnahmenbehandlung"<<endl;
    return 0;

}