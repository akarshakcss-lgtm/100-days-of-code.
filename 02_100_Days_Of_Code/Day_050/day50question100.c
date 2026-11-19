//Q100: Print all sub-strings of a string.

/*
Sample Test Cases:
Input 1:
abc
Output 1:
a,ab,abc,b,bc,c
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    printf("Enter string:\n");
    if (scanf("%s", str) != 1) return 0;

    int len = strlen(str);
    int first = 1;

    for (int i = 0; i < len; i++) {
        for (int j = i; j < len; j++) {
            if (!first) printf(",");
            first = 0;
            for (int k = i; k <= j; k++) {
                putchar(str[k]);
            }
        }
    }
    printf("\n");
    return 0;
}
