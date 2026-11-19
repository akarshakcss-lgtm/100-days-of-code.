//Q146: Create Employee structure with nested Date structure for joining date and print details.

/*
Sample Test Cases:
Input 1:
Employee: Raj | ID: 11 | Joining Date: 12 05 2020
Output 1:
Name: Raj | ID: 11 | Joining Date: 12/05/2020
*/
#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char name[50];
    int id;
    struct Date joinDate;
};

int main() {
    struct Employee emp;
    printf("Enter name, id, and joining date (dd mm yyyy):\n");
    if (scanf("%s %d %d %d %d", emp.name, &emp.id, &emp.joinDate.day, &emp.joinDate.month, &emp.joinDate.year) != 5) return 0;

    printf("Name: %s | ID: %d | Joining Date: %02d/%02d/%04d\n",
           emp.name, emp.id, emp.joinDate.day, emp.joinDate.month, emp.joinDate.year);
    return 0;
}
