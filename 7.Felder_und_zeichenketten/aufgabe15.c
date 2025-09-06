#include <stdio.h>
#include <string.h>
#include<ctype.h>
#include<stdlib.h>

int main()
{
    char sentence[30];
    size_t length;
    printf("Bitte schreiben Sie einen Satz:\n> ");
    if (fgets(sentence, sizeof(sentence), stdin) != NULL)
    {
        sentence[strcspn(sentence, "\n")] = '\0';
        printf("\nSie haben eingegeben: '%s'\n\n", sentence);

        // 2. Actual string length
        length = strlen(sentence);
        printf("Actual length of the entered text (strlen):   %zu characters\n", length);
        for (int i = 0; i < length; i++)
        {
            // printf("%c", toupper(sentence[i]));
            printf("%c,", (sentence[i]));
            printf("\n");   
        }
    }
    return 0;
}