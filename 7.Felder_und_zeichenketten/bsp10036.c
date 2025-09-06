#include <stdio.h>
int main()
{
    printf("Test \n");
    double temperatur[31], gesamt = 0, durchschnitt;
    int zahler;
    for (zahler = 0; zahler < 2; zahler++)
    {
        printf("%2i Tag = ", zahler + 1);
        scanf("%lf", &temperatur[zahler]);
        gesamt = gesamt + temperatur[zahler];
    }
    durchschnitt = gesamt / zahler;
    printf("durchschnitt = %lf", durchschnitt);
    return 0;
    
}