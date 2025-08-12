#include<iostream>
using namespace std;

double berechegesamt(const int& anzahl,const double& preiseinzel)
{
    double preisgesamt;
    preisgesamt=anzahl*preiseinzel;
    return preisgesamt;
}

int main()
{
    int anzahl_apfel=6,anzahl_birne=10;
    cout<<"gesamtpreis: "<<berechegesamt(anzahl_apfel,5.50)<<endl;
    cout<<"gesamtpreis: "<<berechegesamt(anzahl_birne,3.50)<<endl;
}