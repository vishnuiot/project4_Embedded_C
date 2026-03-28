#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
neue_zeile(int x)
{
    int zahler;
    for (zahler = 1; zahler <= x; zahler++)
        printf("\n");
}

int main()
{
    int eingabe;
    neue_zeile(3);
    printf("Erste satz mit %d neuen zeilen",3);
    printf("\n bitte eine zahl eingeben\n");
    scanf("%d",&eingabe);
    neue_zeile(eingabe);
}