//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male
*/
#include <stdio.h>
#include <string.h>

enum Gender {
    MALE,
    FEMALE,
    OTHER
};

struct Person {
    char name[50];
    enum Gender gender;
};

int main() {
    char gStr[20];
    printf("Enter gender (MALE/FEMALE/OTHER): ");
    if (scanf("%*[^=]=%s", gStr) != 1) {
        // fallback if no Gender= prefix
        scanf("%s", gStr);
    }

    struct Person p;
    if (strcmp(gStr, "MALE") == 0) p.gender = MALE;
    else if (strcmp(gStr, "FEMALE") == 0) p.gender = FEMALE;
    else p.gender = OTHER;

    switch (p.gender) {
        case MALE: printf("Male\n"); break;
        case FEMALE: printf("Female\n"); break;
        case OTHER: printf("Other\n"); break;
    }
    return 0;
}
