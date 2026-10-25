//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2
*/
#include <stdio.h>
#include <ctype.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Could not open file\n");
        return 1;
    }

    int chars = 0, words = 0, lines = 0;
    int inWord = 0;
    char ch;

    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == '\n') lines++;
        if (!isspace(ch)) {
            if (!inWord) {
                words++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    if (chars > 0 && ch != '\n') lines++;

    fclose(fp);
    printf("Characters: %d\nWords: %d\nLines: %d\n", chars, words, lines);
    return 0;
}
