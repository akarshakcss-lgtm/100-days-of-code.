// Practice August 21: Fibonacci Series Generation (Iterative and Recursive).
#include <stdio.h>

void printFibonacci(int n) {
    long long a = 0, b = 1;
    printf("First %d Fibonacci numbers: ", n);
    for (int i = 0; i < n; i++) {
        printf("%lld%s", a, (i == n - 1) ? "" : ", ");
        long long next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    printFibonacci(10);
    return 0;
}
