#include<iostream>
using namespace std;

int main()
{
    auto g=[](){cout<<"Hallo Welt from lamda"<<endl;};
    g();
    cout<<"Hallo Welt normal"<<endl;

    int q=10;
    [](int a){cout<<"parameter a = "<<a<<endl;}(5);
    return 0;

}