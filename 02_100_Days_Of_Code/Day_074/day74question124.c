//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt, Destination File: destination.txt
Output 1:
File copied successfully to destination.txt
*/
#include <stdio.h>

int main() {
    char src[100], dst[100];
    printf("Enter source and destination filenames:\n");
    if (scanf("%s %s", src, dst) != 2) return 0;

    FILE *fsrc = fopen(src, "r");
    if (fsrc == NULL) {
        printf("Error opening source file\n");
        return 1;
    }

    FILE *fdst = fopen(dst, "w");
    if (fdst == NULL) {
        fclose(fsrc);
        printf("Error opening destination file\n");
        return 1;
    }

    int ch;
    while ((ch = fgetc(fsrc)) != EOF) {
        fputc(ch, fdst);
    }

    fclose(fsrc);
    fclose(fdst);

    printf("File copied successfully to %s\n", dst);
    return 0;
}
