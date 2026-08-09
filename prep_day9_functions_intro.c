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
