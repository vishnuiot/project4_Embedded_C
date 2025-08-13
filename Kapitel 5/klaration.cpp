#include<iostream>
using namespace std;

void ausgabegesamt(const int& ,const double& );

int main()
{
    int anzahl_apfel=6,anzahl_birne=10;
    ausgabegesamt(anzahl_apfel,5.50);
    ausgabegesamt(anzahl_birne,3.50);
    return 0;

}

void ausgabegesamt(const int& anzahl,const double& preiseinzel)
{
    double preisgesamt;
    preisgesamt=anzahl*preiseinzel;
    cout<<"gesamtpreis: "<<preisgesamt<<endl;

}