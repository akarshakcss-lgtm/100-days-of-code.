//Q120: Write a program to take a string input. Change it to sentence case.

/*
Sample Test Cases:
Input 1:
str = I am trying to build logic.
Output 1:
I Am Trying To Build Logic.
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char str[500];
    printf("Enter a string:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    int newWord = 1;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (isalpha(str[i])) {
            if (newWord) {
                putchar(toupper(str[i]));
                newWord = 0;
            } else {
                putchar(str[i]);
            }
        } else {
            putchar(str[i]);
            if (str[i] == ' ') newWord = 1;
        }
    }
    printf("\n");
    return 0;
}
