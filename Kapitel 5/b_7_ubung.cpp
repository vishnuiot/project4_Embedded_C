#include<iostream>
using namespace std;

void summe( const int&erstezahl, const int&zweitezahl);

int main()
{
cout<<"Programm zur Addition von zwei Zahlen"<<endl;
   cout<<  ("bitte geben sie zwei zahl ein");
   int erstezahl,zweitezahl;
   cin>>erstezahl>>zweitezahl;
   summe(erstezahl,zweitezahl);
   return(0);
}
//test

void summe( const int&erstezahl, const int&zweitezahl)
{
 int summe;
 summe=erstezahl+zweitezahl;
 cout<<"Die Summe ist: "<<summe<<endl;

}