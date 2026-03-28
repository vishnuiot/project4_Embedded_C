#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

zahl(int x)
{    
    printf("Bitte eine Zahl eingeben\n");
    scanf("%d",&x);
    for (x=1;x<=10;x++)
    {
        printf("The input no is = %d\n",x);
    }
}

int main()
{
    int x,y,z;
    zahl(x);
    zahl(y);
    zahl(z);

}