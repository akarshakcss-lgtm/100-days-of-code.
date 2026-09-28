//Q91: Remove all vowels from a string.

/*
Sample Test Cases:
Input 1:
education
Output 1:
dctn
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    printf("Enter a string:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        char ch = tolower(str[i]);
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u') {
            putchar(str[i]);
        }
    }
    printf("\n");
    return 0;
}
