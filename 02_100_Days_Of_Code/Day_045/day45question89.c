//Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/
#include <stdio.h>

int main() {
    char str[500], target;
    printf("Enter a string:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;
    printf("Enter character to count:\n");
    scanf(" %c", &target);

    int count = 0;
    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] == target) count++;
    }

    printf("%d\n", count);
    return 0;
}
