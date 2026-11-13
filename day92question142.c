//Q142: Store details of 5 students in an array of structures and print all.

/*
Sample Test Cases:
Input 1:
Details of 5 students (Name, Roll, Marks)
Output 1:
Tabular list of all 5 students with their details
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s[5];
    printf("Enter details for 5 students (Name Roll Marks):\n");
    for (int i = 0; i < 5; i++) {
        if (scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks) != 3) return 0;
    }

    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 5; i++) {
        printf("Name: %-10s | Roll: %-5d | Marks: %-3d\n", s[i].name, s[i].roll_no, s[i].marks);
    }
    return 0;
}
