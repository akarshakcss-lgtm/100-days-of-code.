//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91
*/
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void modifyStudent(struct Student *ptr, const char *newName, int newRoll, int newMarks) {
    strcpy(ptr->name, newName);
    ptr->roll = newRoll;
    ptr->marks = newMarks;
}

int main() {
    struct Student s = {"Initial", 0, 0};
    struct Student *ptr = &s;

    char name[50];
    int roll, marks;
    printf("Enter new name, roll, and marks to modify:\n");
    if (scanf("%s %d %d", name, &roll, &marks) != 3) return 0;

    modifyStudent(ptr, name, roll, marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);
    return 0;
}
