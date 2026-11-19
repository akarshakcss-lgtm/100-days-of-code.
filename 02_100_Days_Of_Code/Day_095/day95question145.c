//Q145: Return a structure containing top student's details from a function.

/*
Sample Test Cases:
Input 1:
3 students: Riya 101 89, Karan 102 96, Meena 103 92
Output 1:
Top Student: Karan | Roll: 102 | Marks: 96
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

struct Student getTopStudent(struct Student s[], int n) {
    int best = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[best].marks) {
            best = i;
        }
    }
    return s[best];
}

int main() {
    int n;
    printf("Enter number of students:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    struct Student s[100];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    struct Student top = getTopStudent(s, n);
    printf("Top Student: %s | Roll: %d | Marks: %d\n", top.name, top.roll_no, top.marks);
    return 0;
}
