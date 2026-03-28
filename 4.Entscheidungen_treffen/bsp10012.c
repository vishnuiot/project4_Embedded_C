#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int main()
{
    double x,y;
    printf("Bitte x und y eingeben \n");
    scanf("%lf %lf",&x,&y);
    
    if (x>y)
    {
        printf("x ist größer als y");
    }
    else
    {
        printf("y ist größer als x \n");
    }
}