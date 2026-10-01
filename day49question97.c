//Q97: Print the initials of a name.

/*
Sample Test Cases:
Input 1:
John Doe
Output 1:
J.D.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    printf("Enter full name:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    int newWord = 1;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] != ' ' && newWord) {
            printf("%c.", toupper(str[i]));
            newWord = 0;
        } else if (str[i] == ' ') {
            newWord = 1;
        }
    }
    printf("\n");
    return 0;
}
