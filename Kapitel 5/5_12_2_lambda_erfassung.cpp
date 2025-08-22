#include<iostream>
using namespace std;

int main()
{
    int a=10,b=20;
    [a,&b]{ b+=100;cout<<"mit capture "<<a<<" "<<b<<endl;}();
    cout<<"Hallo Welt"<<endl;
    int c=9;
    auto x=[c]{cout<<"bei definition "<<c<<endl;};
    c=109;
    x();
    cout<<"nacher "<<c<<endl;
    return 0;

}