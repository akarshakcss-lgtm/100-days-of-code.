//Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.
*/
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee empWrite;
    printf("Enter name, ID, and salary:\n");
    if (scanf("%s %d %f", empWrite.name, &empWrite.id, &empWrite.salary) != 3) return 0;

    FILE *fp = fopen("employee.bin", "wb");
    if (fp == NULL) {
        printf("Error opening binary file for writing.\n");
        return 1;
    }
    fwrite(&empWrite, sizeof(struct Employee), 1, fp);
    fclose(fp);

    struct Employee empRead;
    fp = fopen("employee.bin", "rb");
    if (fp == NULL) {
        printf("Error opening binary file for reading.\n");
        return 1;
    }
    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    printf("Name: %s | ID: %d | Salary: %.2f\n", empRead.name, empRead.id, empRead.salary);
    return 0;
}
