// Preparation Day 3: Exploring Arithmetic, Relational, Logical, and Bitwise Operators.
#include <stdio.h>

int main() {
    int a = 12, b = 5;

    printf("Arithmetic: a + b = %d, a - b = %d, a * b = %d, a / b = %d, a %% b = %d\n",
           a + b, a - b, a * b, a / b, a % b);

    printf("Relational: a > b = %d, a == b = %d, a != b = %d\n",
           a > b, a == b, a != b);

    printf("Logical: (a > 10 && b < 10) = %d, (a < 5 || b > 2) = %d, !(a == b) = %d\n",
           (a > 10 && b < 10), (a < 5 || b > 2), !(a == b));

    printf("Bitwise: a & b = %d, a | b = %d, a ^ b = %d, ~a = %d, a << 1 = %d, a >> 1 = %d\n",
           a & b, a | b, a ^ b, ~a, a << 1, a >> 1);

    return 0;
}

/*
Execution Output:
Arithmetic: a + b = 17, a - b = 7, a * b = 60, a / b = 2, a % b = 2
Relational: a > b = 1, a == b = 0, a != b = 1
Logical: (a > 10 && b < 10) = 1, (a < 5 || b > 2) = 1, !(a == b) = 1
Bitwise: a & b = 4, a | b = 13, a ^ b = 9, ~a = -13, a << 1 = 24, a >> 1 = 6

*/

