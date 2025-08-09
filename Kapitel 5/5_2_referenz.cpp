#include<iostream>
using namespace std;
int main()
{
    double preis=4.5;

    double& preisReferenz1=preis;
    cout<<"preis1: "<<preisReferenz1<<endl;

    double& preisReferenz2=preisReferenz1;
    cout<<"preis2: "<<preisReferenz2<<endl;

    double& preisReferenz3=preisReferenz2;
    cout<<"preis3: "<<preisReferenz3<<endl;

    preisReferenz2=4.22;
    cout<<"preis1: "<<preisReferenz2<<endl;

    return 0;

    
}