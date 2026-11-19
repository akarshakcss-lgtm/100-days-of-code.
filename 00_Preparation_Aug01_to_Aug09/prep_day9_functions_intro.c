// Preparation Day 9: Functions, Prototypes, and Parameter Passing.
#include <stdio.h>

int add(int a, int b);
void swapByReference(int *a, int *b);

int main() {
    int x = 10, y = 20;
    printf("add(%d, %d) = %d\n", x, y, add(x, y));

    printf("Before swap: x=%d, y=%d\n", x, y);
    swapByReference(&x, &y);
    printf("After swap:  x=%d, y=%d\n", x, y);

    return 0;
}

int add(int a, int b) {
    return a + b;
}

void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

/*
Execution Output:
add(10, 20) = 30
Before swap: x=10, y=20
After swap:  x=20, y=10

*/

