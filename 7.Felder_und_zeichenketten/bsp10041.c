#include<stdio.h>
#include<string.h>

int main()
{
    char eingabe[10];int a;int ergebnis;

    printf("Bitte eine zahl eingenen \n ");
    scanf("%s",eingabe);
    ergebnis=atoi(eingabe);
    printf("die Ergebnis ist %d \n ",ergebnis );
    return 0;
}