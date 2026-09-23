//Q81: Count characters in a string without using built-in length functions.

/*
Sample Test Cases:
Input 1:
Hello
Output 1:
5
*/
#include <stdio.h>

int main() {
    char str[500];
    printf("Enter a string:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    int count = 0;
    while (str[count] != '\0' && str[count] != '\n') {
        count++;
    }

    printf("%d\n", count);
    return 0;
}
