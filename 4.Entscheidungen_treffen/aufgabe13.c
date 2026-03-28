#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    double c,f;
    printf("Pl enter temperature in centigrade\n");
    scanf("%lf",&c);
    f=(c*(9/5)+32);
    printf("The temperature in  farenheit is %lf\n",f);
    return 0;
}
