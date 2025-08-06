#include <iostream>
using namespace std;

int main()
{
    int x, y;
    cout << "zahl zwishen 50 und 60 eingeben" << endl;
    cin >> x;
    (x % 2 == 0) ? cout << "zahl ist gerade" <<endl: cout << "zahl ist ungerade" <<endl;
    (x>50)?cout<<"zahl ist groesser als 50"<<endl:cout<<"zahl ist kleiner als 50"<<endl;
    (x<60)?cout<<"zahl ist kleiner als 60"<<endl:cout<<"zahl ist groesser als 60"<<endl;
    (x<50)?cout<<"zahl ist kleiner als 50"<<endl:(x>60)?cout<<"zahl ist groesser als 60"<<endl:cout<<"zahl ist zwischen 50 und 60"<<endl;
   
    return 0;
}