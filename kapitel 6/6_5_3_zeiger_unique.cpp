#include<iostream>
#include<memory>
using namespace std;

int main()
{
    unique_ptr<int> zi(new int);
    *zi=42;
    cout<<"Variable : "<<*zi<<endl;

    int anzahl;
    cout<<"Anzahl der Elemente"<<endl;
    cin>>anzahl;

    unique_ptr<int[]> zf(new int[anzahl]);
    cout<<"Werte eingeben"<<endl;
    for(int i=0;i<anzahl;i++)
    {
        zf[i]=10*i;
        cout<<zf[i]<<" ";
    }   

    return 0;
}