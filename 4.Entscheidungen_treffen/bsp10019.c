#include<stdio.h>
#include<ctype.h>
void main()
{
    int zahl;char eingabe;
    printf("wahlen sie O für olḱtal,H für hexadezimal und A für oktal\n");
    eingabe=getchar();
    printf("Sie haben character %c ausgewählt \n",eingabe);
    printf("Bitte dezimalzahl eingeben\n");
    scanf("%d",&zahl);
    switch(toupper(eingabe))
    {
        case 'O':
        printf("Dezimal %i entspricht oktal %o\n",zahl,zahl);
        break;
        case 'H':
        printf("Dezimal %i entspricht hexadezimal %x\n",zahl,zahl);
        break;
        printf("Dezimal %i entspricht ASCII %c\n",zahl,zahl);
        default:
        printf("Diese zahl ist zu groß\n");
        break;

    }

        }


