#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    double x=50,y=18,z=10,ergebnis,resultat;
    ergebnis=(x<y);
    resultat=x||z<y;
    if(ergebnis)
    printf("x is kleiner als y \n");
    else
    printf("x ist größer oder gleich als y \n");
    return 0;
}