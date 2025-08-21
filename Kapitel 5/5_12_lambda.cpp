#include<iostream>
using namespace std;
int main()
{
    []{cout<<"Hallo"<<endl;}();

    // Store the lambda in 'x', but don't call it yet.
    auto x= []{cout<<"Welt"<<endl;};

    // Now, call the lambda that is stored in x.
    x();
    x();
    return 0;
}
