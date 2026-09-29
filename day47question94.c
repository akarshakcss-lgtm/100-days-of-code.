//Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[500];
    printf("Enter a sentence:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    int maxLen = 0, maxStart = 0;
    int currLen = 0, currStart = 0;

    for (int i = 0;; i++) {
        char ch = str[i];
        if (ch != ' ' && ch != '\n' && ch != '\r' && ch != '\0') {
            if (currLen == 0) currStart = i;
            currLen++;
        } else {
            if (currLen > maxLen) {
                maxLen = currLen;
                maxStart = currStart;
            }
            currLen = 0;
        }
        if (ch == '\0' || ch == '\n' || ch == '\r') break;
    }

    for (int i = 0; i < maxLen; i++) {
        putchar(str[maxStart + i]);
    }
    printf("\n");
    return 0;
}
