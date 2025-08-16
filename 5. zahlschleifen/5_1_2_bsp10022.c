#include<stdio.h>

int main()
{
    double i,k,multiply;
    for (i=1;i<10;i++)
    {
        for (k=2;k<4;k++)
        {
            multiply=i*k;
            printf("%lf * %lf = %lf \n",i,k,multiply);
        }
    }
}
