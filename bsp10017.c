#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    int a,b,ergebnis;
    printf("\t WAHRHEITSTABLLE \n");
    a=0;b=1;ergebnis=!(a&&b);
    printf("Nand a &b = %i,%i und ergebis= %i \n",a,b,ergebnis);
    a=0;b=1;ergebnis=!(a||b);
    printf("Nor a &b = %i,%i und ergebis= %i \n",a,b,ergebnis);
    a=0;b=1;ergebnis=!(a&&b)&& !(a||b);
    printf("Xor a &b = %i,%i und ergebis= %i \n",a,b,ergebnis);
    return 0;
}



