#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{
    char option;
    printf("Pl enter 1 for centrigrade conversion and 2 for fahrenheit conversion \n");
    scanf(" %c",&option); // Added space before %c to consume any leftover newline
    switch (option)
    {
    case 'a':
        printf("You selected centigrade conversion\n");
        break;
    case 'b':
        printf("You selected fahrenheit conversion\n");
        break;

    default:
        break;
    }
    return 0;

}