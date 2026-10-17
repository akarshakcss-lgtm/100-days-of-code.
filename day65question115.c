//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram
*/
#include <stdio.h>
#include <string.h>

int main() {
    char s[500], t[500];
    printf("Enter string s:\n");
    if (scanf("%s", s) != 1) return 0;
    printf("Enter string t:\n");
    if (scanf("%s", t) != 1) return 0;

    int count[26] = {0};
    for (int i = 0; s[i] != '\0'; i++) count[s[i] - 'a']++;
    for (int i = 0; t[i] != '\0'; i++) count[t[i] - 'a']--;

    int isAnagram = 1;
    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            isAnagram = 0;
            break;
        }
    }

    if (isAnagram) printf("Anagram\n");
    else printf("Not Anagram\n");
    return 0;
}
