//Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    printf("Enter a string:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') len++;

    for (int i = len - 1; i >= 0; i--) {
        putchar(str[i]);
    }
    printf("\n");
    return 0;
}
