#include <stdio.h>
#include <string.h>

int main() {
    // Use a more descriptive variable name
    char sentence[30];
    size_t length; // Use size_t for string lengths, it's the correct type
 
    printf("Bitte schreiben Sie einen Satz:\n> ");
    // Check if fgets was successful
    if (fgets(sentence, sizeof(sentence), stdin) != NULL) {
        // Remove the trailing newline character, if it exists
        sentence[strcspn(sentence, "\n")] = '\0';
 
        printf("\nYou entered: '%s'\n\n", sentence);
 
        // 1. Allocated size (memory capacity)
        printf("Allocated memory size for the string (sizeof): %zu bytes\n", sizeof(sentence));
 
        // 2. Actual string length
        length = strlen(sentence);
        printf("Actual length of the entered text (strlen):   %zu characters\n", length);
    }
    return 0;
}
