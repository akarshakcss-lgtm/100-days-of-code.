//Q90: Toggle case of each character in a string.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
hELLO
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    printf("Enter a string:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (isupper(str[i])) putchar(tolower(str[i]));
        else if (islower(str[i])) putchar(toupper(str[i]));
        else putchar(str[i]);
    }
    printf("\n");
    return 0;
}
