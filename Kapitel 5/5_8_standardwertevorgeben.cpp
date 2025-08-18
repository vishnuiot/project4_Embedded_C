#include<iostream>
using namespace std;

void ausgabegesamt(const int& anzahl=1,const double& preis=0.95)
{
    double preisgesamt;
    preisgesamt=anzahl*preis;
    cout<<"gesamtpreis: "<<preisgesamt<<endl;
}

int main()
{
    int anzahl_apfel=6,anzahl_birne=10;
    ausgabegesamt(anzahl_apfel,5.50);
    ausgabegesamt(anzahl_birne,3.50);
    ausgabegesamt();
    return 0;


}