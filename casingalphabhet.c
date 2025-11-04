#include <stdio.h>

int main() {
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (islower(ch)) {
        printf("Uppercase: %c\n", toupper(ch));
    } 
    else if (isupper(ch)) {
        printf("Lowercase: %c\n", tolower(ch));
    } 
    else {
        printf("Not an alphabetic character.\n");
    }

    return 0;
}
