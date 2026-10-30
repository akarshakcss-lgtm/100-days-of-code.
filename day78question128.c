//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    int vowels = 0, consonants = 0;
    int ch;
    while ((ch = fgetc(fp)) != EOF) {
        if (isalpha(ch)) {
            char lower = tolower(ch);
            if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }

    fclose(fp);
    printf("Vowels: %d\nConsonants: %d\n", vowels, consonants);
    return 0;
}
