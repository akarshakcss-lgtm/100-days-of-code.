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
