//Q93: Check if two strings are anagrams of each other.

/*
Sample Test Cases:
Input 1:
listen
silent
Output 1:
Anagrams

Input 2:
hello
world
Output 2:
Not anagrams
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s1[500], s2[500];
    printf("Enter first string:\n");
    if (scanf("%s", s1) != 1) return 0;
    printf("Enter second string:\n");
    if (scanf("%s", s2) != 1) return 0;

    int count[256] = {0};
    for (int i = 0; s1[i] != '\0'; i++) count[(unsigned char)s1[i]]++;
    for (int i = 0; s2[i] != '\0'; i++) count[(unsigned char)s2[i]]--;

    int isAnagram = 1;
    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) printf("Anagrams\n");
    else printf("Not anagrams\n");
    return 0;
}
