#include<stdio.h>
#include<string.h>

int main()
{
    char strings[30];char ergebnis[30];
    strcpy(strings,"Bild");
    strcat(strings,"schirm");
    strcat(strings,"steuerung");
    printf("%s \n",strings);
    return 0;
    
}
