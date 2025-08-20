#include<iostream>
using namespace std;

void halbieren (double& x,const double& grenze)
{
    x=x/2;
    cout<<"halbiert: "<<x<<endl;
    if(x>grenze)
    {
        halbieren(x,grenze);
    }
}

int main()
{
    double x,grenze;
    cout<<"wert ="<<endl;
    cin>>x;
    cout<<"grenze ="<<endl;
    cin>>grenze;
    halbieren(x,grenze);
    return 0;

}