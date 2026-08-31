// Practice August 31: Implementation of standard string library functions from scratch.
#include <stdio.h>

int my_strlen(const char *s) {
    int len = 0;
    while (s[len]) len++;
    return len;
}

void my_strcpy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

int my_strcmp(const char *s1, const char *s2) {
    while (*s1 && (*s1 == *s2)) {
        s1++;
        s2++;
    }
    return *(const unsigned char*)s1 - *(const unsigned char*)s2;
}

int main() {
    char s1[50] = "Hello";
    char s2[50];

    printf("Length: %d\n", my_strlen(s1));
    my_strcpy(s2, s1);
    printf("Copied string: %s\n", s2);
    printf("Compare with 'Hello': %d\n", my_strcmp(s1, "Hello"));
    printf("Compare with 'World': %d\n", my_strcmp(s1, "World"));
    return 0;
}
