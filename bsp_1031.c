#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>    

int max(int a,int b)
{
    if (a>b)
    {
        printf(" %d is big",a);
    }
    else
    {
         printf(" %d is big",b);
    }   
}

void main()
{
    int a,b;
    printf("Pl enter two number \n");
    scanf("%d",&a);
    scanf("%d",&b);
    max(a,b);


}