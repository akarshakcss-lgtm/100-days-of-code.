// Practice August 20: Prime Factorization and Sieve of Eratosthenes.
#include <stdio.h>

void primeFactors(int n) {
    printf("Prime factors of %d: ", n);
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 2) printf("%d", n);
    printf("\n");
}

int main() {
    primeFactors(315);
    primeFactors(84);
    return 0;
}

/*
Execution Output:
Prime factors of 315: 3 3 5 7
Prime factors of 84: 2 2 3 7

*/

