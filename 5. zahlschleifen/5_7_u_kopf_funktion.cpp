#include<iostream>
using namespace std;

int counter( erstezahl, zweitezahl);

int main()
{
    int summe;
   
   counter( erstezahl, zweitezahl);
   summe=erstezahl+zweitezahl;
   cout<<"die summe ist: "<<summe<<endl;
   cout<<"ende"<<endl;
   return(0);
}
//test

int counter( erstezahl, zweitezahl)
{
    cout<<"bitte erstezahl eingeben"<<endl; 
    cin>>erstezahl;
    cout<<"bitte zweitezahl eingeben"<<endl;
    cin>>zweitezahl;
}