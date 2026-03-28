#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    double betrag;
    printf("Bitte Betrag eingeben \n");
    scanf("%lf", &betrag);
    printf("Der eingegebene Betrag ist %lf \n", betrag);

    if (betrag < 0)
    {
        printf("Der Betrag ist negativ \n");
    }
    else
        printf("Der Betrag ist positiv \n");


    return 0;
}

