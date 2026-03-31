#include <iostream>
using namespace std;

int main()
{
    int x, i, result;

    for (i = 1; i <= 10; i++)
    {
        cout << "zahl eingeben" << endl;
        cin >> x;
        (x == 5) ? cout << "zahl ist gleich 5" << endl : cout << "zahl ist ungleich 5" << endl;
    }
}