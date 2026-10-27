//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
User Input: This is appended text.
Output 1:
File updated successfully with appended text.
*/
#include <stdio.h>

int main() {
    char filename[100];
    printf("Enter filename: ");
    if (scanf("%s", filename) != 1) return 0;

    FILE *fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    char text[500];
    printf("Enter text to append:\n");
    getchar(); // consume newline
    if (fgets(text, sizeof(text), stdin) != NULL) {
        fputs(text, fp);
    }

    fclose(fp);
    printf("File updated successfully with appended text.\n");
    return 0;
}
