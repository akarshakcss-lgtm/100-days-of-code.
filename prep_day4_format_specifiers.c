// Preparation Day 4: Format Specifiers and Formatted I/O.
#include <stdio.h>

int main() {
    int id = 42;
    float pi = 3.14159265f;
    double e = 2.718281828459;
    char grade = 'A';
    char name[] = "Akarshak";

    printf("Integer padding: [%05d] or [%-5d]\n", id, id);
    printf("Floating point precision: [%.2f] or [%.4f]\n", pi, pi);
    printf("Scientific notation: [%e]\n", e);
    printf("Hexadecimal: [%X] and Octal: [%o]\n", id, id);
    printf("Character: [%c], String: [%s]\n", grade, name);
    return 0;
}

/*
Execution Output:
Integer padding: [00042] or [42   ]
Floating point precision: [3.14] or [3.1416]
Scientific notation: [2.718282e+000]
Hexadecimal: [2A] and Octal: [52]
Character: [A], String: [Akarshak]

*/

