//Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s
*/
#include <stdio.h>

int main() {
    char str[500];
    printf("Enter a string:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    int freq[26] = {0};
    char found = '\0';

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            freq[str[i] - 'a']++;
        }
    }

    for (int i = 0; str[i] != '\0' && str[i] != '\n' && str[i] != '\r'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z' && freq[str[i] - 'a'] > 1) {
            found = str[i];
            break;
        }
    }

    if (found != '\0') printf("%c\n", found);
    else printf("None\n");
    return 0;
}
