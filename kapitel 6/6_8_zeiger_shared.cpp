#include<iostream>
#include<memory>
using namespace std;
int main()
{
    shared_ptr<int> zi(new int);
    *zi=42;
    shared_ptr<int> zi2(zi);
    cout<<"Variable : "<<*zi<<endl;
    cout<<"Variable : "<<*zi2<<endl;
    return 0;
}