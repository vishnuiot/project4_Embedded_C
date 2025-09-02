#include<iostream>
using namespace std;
int main()
{
    // Einfacher Zeiger auf einzelne Variabel//
int *zi=new int;
*zi = 42;
cout<<"Variable : "<<*zi<<endl;
delete zi;

// Einfacher zeiger auf einfaches dynamisches feld von int//
int *zf,anzahl;
cout<<" Anzahl der Elemente"<<endl;
cin>>anzahl;

zf=new int[anzahl];
cout<<"Werte eingeben"<<endl;
for(int i=0;i<anzahl;i++)
{
    zf[i] =10*i;
    cout<<zf[i]<<" ";
}

cout<<endl;
delete []zf;
return 0;


}