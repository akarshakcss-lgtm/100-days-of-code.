//Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[500];
    printf("Enter full name:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    char words[20][50];
    int count = 0;

    char *token = strtok(str, " \t\r\n");
    while (token != NULL) {
        strcpy(words[count++], token);
        token = strtok(NULL, " \t\r\n");
    }

    if (count == 0) return 0;

    if (count == 1) {
        printf("%s\n", words[0]);
    } else {
        for (int i = 0; i < count - 1; i++) {
            printf("%c.", toupper(words[i][0]));
        }
        printf(" %s\n", words[count - 1]);
    }
    return 0;
}
