#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    int zahl;
    printf("Bitte eine Zahl eingeben\n");
    scanf("%d", &zahl);
    for (int i = 1; i <= zahl; i++)
    {
        printf("%d\n", i);
    }
    return 0;

}