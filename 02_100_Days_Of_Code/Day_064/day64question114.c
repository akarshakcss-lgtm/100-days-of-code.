//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[500];
    printf("Enter string:\n");
    if (scanf("%s", s) != 1) return 0;

    int n = strlen(s);
    int maxLen = 0;
    int lastPos[256];
    for (int i = 0; i < 256; i++) lastPos[i] = -1;

    int start = 0;
    for (int i = 0; i < n; i++) {
        unsigned char ch = (unsigned char)s[i];
        if (lastPos[ch] >= start) {
            start = lastPos[ch] + 1;
        }
        lastPos[ch] = i;
        int len = i - start + 1;
        if (len > maxLen) maxLen = len;
    }

    printf("%d\n", maxLen);
    return 0;
}
