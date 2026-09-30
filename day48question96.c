//Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>
#include <string.h>

void reverseWord(char str[], int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[500];
    printf("Enter a sentence:\n");
    if (fgets(str, sizeof(str), stdin) == NULL) return 0;

    int len = 0;
    while (str[len] != '\0' && str[len] != '\n' && str[len] != '\r') len++;
    str[len] = '\0';

    int start = 0;
    for (int i = 0; i <= len; i++) {
        if (str[i] == ' ' || str[i] == '\0') {
            reverseWord(str, start, i - 1);
            start = i + 1;
        }
    }

    printf("%s\n", str);
    return 0;
}
