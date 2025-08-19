#include <iostream>
using namespace std;

int addieren(const int &, const int &);
double addieren(const double &, const double &);
double addieren(const double &, const double &, const double &, const double &);

int main()
{
    cout << addieren(1, 2) << endl;
    cout << addieren(1.1, 2.2) << endl;
    cout << addieren(1.1, 2.2, 3.3, 4.4) << endl;
    cout << addieren(10, 20) << endl;
}

int addieren(const int &a, const int &b)
{
    int ergebnis;
    ergebnis = a + b;
    return ergebnis;
}

double addieren(const double &a, const double &b)
{
    double ergebnis;
    ergebnis = a + b;
    return ergebnis;
}

double addieren(const double &a, const double &b, const double &c, const double &d)
{
    double ergebnis;
    ergebnis = a + b + c + d;
    return ergebnis;
}
