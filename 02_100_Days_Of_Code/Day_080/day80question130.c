//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 -> Name: Asha, Roll: 101, Marks: 85; Student 2 -> Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    FILE *fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error creating file\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        char name[50];
        int roll, marks;
        printf("Enter name, roll, marks for student %d:\n", i + 1);
        scanf("%s %d %d", name, &roll, &marks);
        fprintf(fp, "%s %d %d\n", name, roll, marks);
    }
    fclose(fp);

    fp = fopen("students.txt", "r");
    if (fp == NULL) return 1;

    char name[50];
    int roll, marks;
    while (fscanf(fp, "%s %d %d", name, &roll, &marks) == 3) {
        printf("Name: %s | Roll: %d | Marks: %d\n", name, roll, marks);
    }
    fclose(fp);

    return 0;
}
