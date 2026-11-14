//Q143: Find and print the student with the highest marks.

/*
Sample Test Cases:
Input 1:
3 students: Ravi 101 95, Sita 102 85, Aman 103 88
Output 1:
Topper: Ravi (Marks: 95)
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    int n;
    printf("Enter number of students:\n");
    if (scanf("%d", &n) != 1 || n <= 0) return 0;

    struct Student s[100];
    for (int i = 0; i < n; i++) {
        scanf("%s %d %d", s[i].name, &s[i].roll_no, &s[i].marks);
    }

    int bestIdx = 0;
    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[bestIdx].marks) {
            bestIdx = i;
        }
    }

    printf("Topper: %s (Marks: %d)\n", s[bestIdx].name, s[bestIdx].marks);
    return 0;
}
