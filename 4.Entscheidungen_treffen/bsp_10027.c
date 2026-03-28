#include <stdio.h>

int main()
{
    int eingabe;

    while (1)
    {
        printf("Bitte eine Zahl eingeben bis 100: \n");
        scanf("%d", &eingabe);
        if (eingabe > 100)
        {
            printf("Die Zahl ist groesser als 100 \n");
            break;
        }
        else
        {
            printf("Die Zahl ist kleiner als 100 . die zahl is %d \n", eingabe);
            printf("Bitte eine Zahl eingeben bis 100: \n");
        }
    }

}
