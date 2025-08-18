#include<iostream>
#include<cstdarg>
using namespace std;

void addieren(const int &anzahl, ...)
{
    double summe=0;
    va_list liste;
    va_start(liste,anzahl);
    for(int i=0;i<anzahl;i++)
    {
        summe+=va_arg(liste,double);
    }
    va_end(liste);
    cout<<"summe: "<<summe<<endl;

}

int main()
{
    addieren(3,1.1,2.2,3.3);
    addieren(2,1.1,2.2);
    return 0;   
}