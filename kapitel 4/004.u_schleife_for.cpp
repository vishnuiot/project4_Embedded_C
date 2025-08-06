#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double zahl,i,result;
    cout<<"zahl eingeben mit fünf nachkommastellen = "<<endl;
    cin>>zahl;
    cout<<"\n"<<endl;
    for (i=1;i<=5;i++ )
    {
        result=zahl*5*i;
        cout<<result<<setprecision(3)<<fixed<<"\n"<<endl;
        }

}