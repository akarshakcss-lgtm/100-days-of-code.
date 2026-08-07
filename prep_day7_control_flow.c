// Preparation Day 7: Control Flow Structures (if, else if, ternary, switch).
#include <stdio.h>

int main() {
    int score = 85;
    char grade;

    // Ternary operator
    printf("Result: %s\n", (score >= 40) ? "PASS" : "FAIL");

    // Ladder if-else
    if (score >= 90) grade = 'O';
    else if (score >= 80) grade = 'A';
    else if (score >= 70) grade = 'B';
    else if (score >= 60) grade = 'C';
    else grade = 'F';

    printf("Grade assigned: %c\n", grade);
    return 0;
}
