#include <stdio.h>
#include <string.h>

int main()
{
    int i = 0;
    char satz[20];
    printf("Bitte einen satz schreiben \n");
    fgets(satz, sizeof(satz), stdin);
    while (satz[i] != '\0')
    {
        printf("\n %s \n",satz[i++]);
        
    }
    

    return 0;
}