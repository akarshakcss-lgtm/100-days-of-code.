//Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data.

/*
Sample Test Cases:
Input 1:
Name: Asha
Roll: 101
Marks: 90
Output 1:
Name: Asha | Roll: 101 | Marks: 90
*/
#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    int marks;
};

int main() {
    struct Student s;
    printf("Enter name, roll number, and marks:\n");
    if (scanf("%s %d %d", s.name, &s.roll_no, &s.marks) != 3) return 0;

    printf("Name: %s | Roll: %d | Marks: %d\n", s.name, s.roll_no, s.marks);
    return 0;
}
