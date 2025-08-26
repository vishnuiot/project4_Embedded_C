#include <iostream>
#include <iomanip>
using namespace std;

double quadrat(double x)
{
    return x * x;
}

int main()
{
    double x=10;double g;
    cout << quadrat(7) << endl;
    [] (double wurfel){cout<<wurfel<<endl;}(x*quadrat(7));
    return 0;

}

// int main()
// {
//     double x=10;double ergebnis;
//     ergebnis=x*x;
//     cout<<"Ergebnis: "<<ergebnis<<endl;
//     return 0;

// }