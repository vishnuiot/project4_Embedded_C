#include<iostream>
using namespace std;

void ausgabegesamt(const double& anzahl,const double&  anzahlpreis)
{
    static int aufruf =1;
    cout<<aufruf<<".Aufruf "<<endl;
    aufruf++;

    double preisgesamt;
    preisgesamt=anzahl*anzahlpreis;
    cout<<"gesamtpreis: "<<preisgesamt<<endl;

}

int main()

{
    int anzahl_apfel=6,anzahl_birne=10;
    ausgabegesamt(anzahl_apfel,1.1);
    ausgabegesamt(anzahl_birne,3.50);
    return 0;
} 
