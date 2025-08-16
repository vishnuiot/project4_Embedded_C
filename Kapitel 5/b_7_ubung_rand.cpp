#include <iostream>
#include <climits>
#include <cstdlib>
#include <ctime>
using namespace std;

void summe(const int &erstezahl, const int &zweitezahl);

int main()
{
   cout << "Programm zur Addition von zwei zufälligen Zahlen" << endl;
   srand(time(0));
   int erstezahl, zweitezahl;
   erstezahl = rand() % 100;
   zweitezahl = rand() % 100;
   cout << erstezahl << endl;
   cout << zweitezahl << endl;
   summe(erstezahl,zweitezahl);
   return (0);
}
// test

void summe(const int &erstezahl, const int &zweitezahl)
{
   int summe;
   summe = erstezahl + zweitezahl;
   cout << "Die Summe ist: " << summe << endl;
}