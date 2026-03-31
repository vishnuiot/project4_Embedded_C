#include<iostream>
using namespace std;
void ausgabegesamt(int anzahl,double preiseinzel)
{
    double preisgesamt;
    preisgesamt=anzahl*preiseinzel;
    cout<<"gesamtpreis: "<<preisgesamt<<endl;

}

int main()
{
    int anzahl_apfel=6,anzahl_birne=10;
    ausgabegesamt(anzahl_apfel,5.50);
    ausgabegesamt(anzahl_birne,3.50);
    ausgabegesamt(anzahl_apfel+anzahl_birne,5.50+3.50);
    return 0;
}