#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double i, k, result,multiply;
    for (i = 1; i <= 5; i++)
    {
        result=i;        ;
        cout<<result<<setprecision(3)<<fixed<<"\n"<<endl;
        for (k = 1; k <= 10; k++)
        {
            multiply= k * i;
            cout << multiply << setprecision(3) << fixed << "\n"<< endl;
        }
    }
}